//  Forest.cpp

#include <RcppArmadillo.h>
#include "ForestSurvival.h"
#include "TreeSurvival.h"

using namespace arma;
using namespace Rcpp;

namespace aorsf {

ForestSurvival::ForestSurvival() { }

ForestSurvival::ForestSurvival(double leaf_min_events,
                               double split_min_events,
                               arma::vec& pred_horizon){

 this->leaf_min_events = leaf_min_events;
 this->split_min_events = split_min_events;
 this->pred_horizon = pred_horizon;

}



void ForestSurvival::load(arma::uword n_tree,
                          std::vector<std::vector<double>>& forest_cutpoint,
                          std::vector<std::vector<arma::uword>>& forest_child_left,
                          std::vector<std::vector<arma::vec>>& forest_coef_values,
                          std::vector<std::vector<arma::uvec>>& forest_coef_indices,
                          std::vector<std::vector<arma::vec>>& forest_leaf_pred_indx,
                          std::vector<std::vector<arma::vec>>& forest_leaf_pred_prob,
                          std::vector<std::vector<arma::vec>>& forest_leaf_pred_chaz,
                          std::vector<std::vector<double>>& forest_leaf_summary) {

 this->n_tree = n_tree;

 if(VERBOSITY > 0){
  Rcout << "---- loading forest from input list ----";
  Rcout << std::endl << std::endl;
 }

 // Create trees
 trees.reserve(n_tree);

 for (uword i = 0; i < n_tree; ++i) {
  trees.push_back(
   std::make_unique<TreeSurvival>(forest_cutpoint[i],
                                  forest_child_left[i],
                                  forest_coef_values[i],
                                  forest_coef_indices[i],
                                  forest_leaf_pred_indx[i],
                                  forest_leaf_pred_prob[i],
                                  forest_leaf_pred_chaz[i],
                                  forest_leaf_summary[i],
                                  &pred_horizon)
  );
 }

 // Create thread ranges
 equalSplit(thread_ranges, 0, n_tree - 1, n_thread);

}

// growInternal() in ranger
void ForestSurvival::plant() {

 this->unique_event_times = find_unique_event_times(data->get_y());

 trees.reserve(n_tree);

 for (arma::uword i = 0; i < n_tree; ++i) {
  trees.push_back(std::make_unique<TreeSurvival>(leaf_min_events,
                                                 split_min_events,
                                                 &unique_event_times,
                                                 &pred_horizon));
 }

}

void ForestSurvival::resize_pred_mat(arma::mat& p){

 p.zeros(data->n_rows, pred_horizon.size());

}

std::vector<std::vector<arma::vec>> ForestSurvival::get_leaf_pred_indx() {

 std::vector<std::vector<arma::vec>> result;

 result.reserve(n_tree);

 for (auto& tree : trees) {
  auto& temp = dynamic_cast<TreeSurvival&>(*tree);
  result.push_back(temp.get_leaf_pred_indx());
 }

 return result;

}

std::vector<std::vector<arma::vec>> ForestSurvival::get_leaf_pred_prob() {

 std::vector<std::vector<arma::vec>> result;

 result.reserve(n_tree);

 for (auto& tree : trees) {
  auto& temp = dynamic_cast<TreeSurvival&>(*tree);
  result.push_back(temp.get_leaf_pred_prob());
 }

 return result;

}

std::vector<std::vector<arma::vec>> ForestSurvival::get_leaf_pred_chaz() {

 std::vector<std::vector<arma::vec>> result;

 result.reserve(n_tree);

 for (auto& tree : trees) {
  auto& temp = dynamic_cast<TreeSurvival&>(*tree);
  result.push_back(temp.get_leaf_pred_chaz());
 }

 return result;

}

void ForestSurvival::resize_oobag_eval(){

 uword n_evals = find_max_eval_steps();

 oobag_eval.resize(n_evals, pred_horizon.size());

}

void ForestSurvival::compute_prediction_accuracy(Data* prediction_data,
                                                 arma::uword row_fill,
                                                 arma::mat& predictions){

 mat y = prediction_data->get_y();
 vec w = prediction_data->get_w();

 compute_prediction_accuracy(y, w, row_fill, predictions);

}

void ForestSurvival::compute_prediction_accuracy(arma::mat& y,
                                                 arma::vec& w,
                                                 arma::uword row_fill,
                                                 arma::mat& predictions){

 bool pred_is_risklike = true;

 if(pred_type == PRED_SURVIVAL) pred_is_risklike = false;

 for(arma::uword i = 0; i < oobag_eval.n_cols; ++i){
  vec p = predictions.unsafe_col(i);
  oobag_eval(row_fill, i) = compute_cstat(y, w, p, pred_is_risklike);
 }

}


}


