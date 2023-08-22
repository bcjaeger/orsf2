// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// coxph_scale_exported
List coxph_scale_exported(arma::vec& x_node, arma::vec& w_node);
RcppExport SEXP _aorsf_coxph_scale_exported(SEXP x_nodeSEXP, SEXP w_nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x_node(x_nodeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type w_node(w_nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(coxph_scale_exported(x_node, w_node));
    return rcpp_result_gen;
END_RCPP
}
// coxph_fit_exported
List coxph_fit_exported(arma::mat& x_node, arma::mat& y_node, arma::vec& w_node, int method, double cph_eps, arma::uword cph_iter_max);
RcppExport SEXP _aorsf_coxph_fit_exported(SEXP x_nodeSEXP, SEXP y_nodeSEXP, SEXP w_nodeSEXP, SEXP methodSEXP, SEXP cph_epsSEXP, SEXP cph_iter_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x_node(x_nodeSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y_node(y_nodeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type w_node(w_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type cph_eps(cph_epsSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type cph_iter_max(cph_iter_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(coxph_fit_exported(x_node, y_node, w_node, method, cph_eps, cph_iter_max));
    return rcpp_result_gen;
END_RCPP
}
// node_find_cps_exported
List node_find_cps_exported(arma::mat& y_node, arma::vec& w_node, arma::vec& XB, double leaf_min_events, double leaf_min_obs);
RcppExport SEXP _aorsf_node_find_cps_exported(SEXP y_nodeSEXP, SEXP w_nodeSEXP, SEXP XBSEXP, SEXP leaf_min_eventsSEXP, SEXP leaf_min_obsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y_node(y_nodeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type w_node(w_nodeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type XB(XBSEXP);
    Rcpp::traits::input_parameter< double >::type leaf_min_events(leaf_min_eventsSEXP);
    Rcpp::traits::input_parameter< double >::type leaf_min_obs(leaf_min_obsSEXP);
    rcpp_result_gen = Rcpp::wrap(node_find_cps_exported(y_node, w_node, XB, leaf_min_events, leaf_min_obs));
    return rcpp_result_gen;
END_RCPP
}
// node_compute_lrt_exported
double node_compute_lrt_exported(arma::mat& y_node, arma::vec& w_node, arma::vec& group);
RcppExport SEXP _aorsf_node_compute_lrt_exported(SEXP y_nodeSEXP, SEXP w_nodeSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y_node(y_nodeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type w_node(w_nodeSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type group(groupSEXP);
    rcpp_result_gen = Rcpp::wrap(node_compute_lrt_exported(y_node, w_node, group));
    return rcpp_result_gen;
END_RCPP
}
// node_fill_group_exported
void node_fill_group_exported(arma::vec& group, arma::uvec& XB_sorted, arma::uword start, arma::uword stop, double value);
RcppExport SEXP _aorsf_node_fill_group_exported(SEXP groupSEXP, SEXP XB_sortedSEXP, SEXP startSEXP, SEXP stopSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type XB_sorted(XB_sortedSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type start(startSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    node_fill_group_exported(group, XB_sorted, start, stop, value);
    return R_NilValue;
END_RCPP
}
// orsf_cpp
List orsf_cpp(arma::mat& x, arma::mat& y, arma::vec& w, Rcpp::IntegerVector& tree_seeds, Rcpp::Function& lincomb_R_function, Rcpp::Function& oobag_R_function, arma::uword n_tree, arma::uword mtry, arma::uword vi_type_R, double leaf_min_events, double leaf_min_obs, arma::uword split_rule_R, double split_min_events, double split_min_obs, double split_min_stat, arma::uword split_max_cuts, arma::uword split_max_retry, arma::uword lincomb_type_R, double lincomb_eps, arma::uword lincomb_iter_max, bool lincomb_scale, double lincomb_alpha, arma::uword lincomb_df_target, arma::uword lincomb_ties_method, bool pred_mode, arma::uword pred_type_R, double pred_horizon, bool oobag_pred, arma::uword oobag_eval_every);
RcppExport SEXP _aorsf_orsf_cpp(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP tree_seedsSEXP, SEXP lincomb_R_functionSEXP, SEXP oobag_R_functionSEXP, SEXP n_treeSEXP, SEXP mtrySEXP, SEXP vi_type_RSEXP, SEXP leaf_min_eventsSEXP, SEXP leaf_min_obsSEXP, SEXP split_rule_RSEXP, SEXP split_min_eventsSEXP, SEXP split_min_obsSEXP, SEXP split_min_statSEXP, SEXP split_max_cutsSEXP, SEXP split_max_retrySEXP, SEXP lincomb_type_RSEXP, SEXP lincomb_epsSEXP, SEXP lincomb_iter_maxSEXP, SEXP lincomb_scaleSEXP, SEXP lincomb_alphaSEXP, SEXP lincomb_df_targetSEXP, SEXP lincomb_ties_methodSEXP, SEXP pred_modeSEXP, SEXP pred_type_RSEXP, SEXP pred_horizonSEXP, SEXP oobag_predSEXP, SEXP oobag_eval_everySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type tree_seeds(tree_seedsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function& >::type lincomb_R_function(lincomb_R_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function& >::type oobag_R_function(oobag_R_functionSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type n_tree(n_treeSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< arma::uword >::type vi_type_R(vi_type_RSEXP);
    Rcpp::traits::input_parameter< double >::type leaf_min_events(leaf_min_eventsSEXP);
    Rcpp::traits::input_parameter< double >::type leaf_min_obs(leaf_min_obsSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type split_rule_R(split_rule_RSEXP);
    Rcpp::traits::input_parameter< double >::type split_min_events(split_min_eventsSEXP);
    Rcpp::traits::input_parameter< double >::type split_min_obs(split_min_obsSEXP);
    Rcpp::traits::input_parameter< double >::type split_min_stat(split_min_statSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type split_max_cuts(split_max_cutsSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type split_max_retry(split_max_retrySEXP);
    Rcpp::traits::input_parameter< arma::uword >::type lincomb_type_R(lincomb_type_RSEXP);
    Rcpp::traits::input_parameter< double >::type lincomb_eps(lincomb_epsSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type lincomb_iter_max(lincomb_iter_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type lincomb_scale(lincomb_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type lincomb_alpha(lincomb_alphaSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type lincomb_df_target(lincomb_df_targetSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type lincomb_ties_method(lincomb_ties_methodSEXP);
    Rcpp::traits::input_parameter< bool >::type pred_mode(pred_modeSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type pred_type_R(pred_type_RSEXP);
    Rcpp::traits::input_parameter< double >::type pred_horizon(pred_horizonSEXP);
    Rcpp::traits::input_parameter< bool >::type oobag_pred(oobag_predSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type oobag_eval_every(oobag_eval_everySEXP);
    rcpp_result_gen = Rcpp::wrap(orsf_cpp(x, y, w, tree_seeds, lincomb_R_function, oobag_R_function, n_tree, mtry, vi_type_R, leaf_min_events, leaf_min_obs, split_rule_R, split_min_events, split_min_obs, split_min_stat, split_max_cuts, split_max_retry, lincomb_type_R, lincomb_eps, lincomb_iter_max, lincomb_scale, lincomb_alpha, lincomb_df_target, lincomb_ties_method, pred_mode, pred_type_R, pred_horizon, oobag_pred, oobag_eval_every));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_aorsf_coxph_scale_exported", (DL_FUNC) &_aorsf_coxph_scale_exported, 2},
    {"_aorsf_coxph_fit_exported", (DL_FUNC) &_aorsf_coxph_fit_exported, 6},
    {"_aorsf_node_find_cps_exported", (DL_FUNC) &_aorsf_node_find_cps_exported, 5},
    {"_aorsf_node_compute_lrt_exported", (DL_FUNC) &_aorsf_node_compute_lrt_exported, 3},
    {"_aorsf_node_fill_group_exported", (DL_FUNC) &_aorsf_node_fill_group_exported, 5},
    {"_aorsf_orsf_cpp", (DL_FUNC) &_aorsf_orsf_cpp, 29},
    {NULL, NULL, 0}
};

RcppExport void R_init_aorsf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
