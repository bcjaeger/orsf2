// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// x_scale_wtd
arma::mat x_scale_wtd(arma::mat& x_mat, arma::uvec& weights);
RcppExport SEXP _orsf2_x_scale_wtd(SEXP x_matSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x_mat(x_matSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(x_scale_wtd(x_mat, weights));
    return rcpp_result_gen;
END_RCPP
}
// x_scale_unwtd
arma::mat x_scale_unwtd(arma::mat& x_mat);
RcppExport SEXP _orsf2_x_scale_unwtd(SEXP x_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x_mat(x_matSEXP);
    rcpp_result_gen = Rcpp::wrap(x_scale_unwtd(x_mat));
    return rcpp_result_gen;
END_RCPP
}
// x_new_scale_cph
void x_new_scale_cph(arma::mat& x_new, arma::mat& x_transforms);
RcppExport SEXP _orsf2_x_new_scale_cph(SEXP x_newSEXP, SEXP x_transformsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x_new(x_newSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x_transforms(x_transformsSEXP);
    x_new_scale_cph(x_new, x_transforms);
    return R_NilValue;
END_RCPP
}
// x_new_unscale_cph
void x_new_unscale_cph(arma::mat& x_new, arma::mat& x_transforms);
RcppExport SEXP _orsf2_x_new_unscale_cph(SEXP x_newSEXP, SEXP x_transformsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x_new(x_newSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x_transforms(x_transformsSEXP);
    x_new_unscale_cph(x_new, x_transforms);
    return R_NilValue;
END_RCPP
}
// leaf_surv_small
arma::mat leaf_surv_small(const arma::mat& y, const arma::uvec& weights);
RcppExport SEXP _orsf2_leaf_surv_small(SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(leaf_surv_small(y, weights));
    return rcpp_result_gen;
END_RCPP
}
// leaf_surv
arma::mat leaf_surv(arma::mat& y, arma::uvec& weights);
RcppExport SEXP _orsf2_leaf_surv(SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(leaf_surv(y, weights));
    return rcpp_result_gen;
END_RCPP
}
// node_summarize
arma::mat node_summarize(arma::mat& y, arma::uvec& node_assignments, arma::uvec& weights, arma::uword& nodes_max);
RcppExport SEXP _orsf2_node_summarize(SEXP ySEXP, SEXP node_assignmentsSEXP, SEXP weightsSEXP, SEXP nodes_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type node_assignments(node_assignmentsSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::uword& >::type nodes_max(nodes_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(node_summarize(y, node_assignments, weights, nodes_max));
    return rcpp_result_gen;
END_RCPP
}
// find_cutpoints_ctns
void find_cutpoints_ctns(arma::vec& cp, const arma::vec& lc, const arma::mat& y, const arma::uvec weights, const arma::uword& leaf_min_obs, const arma::uword& leaf_min_events);
RcppExport SEXP _orsf2_find_cutpoints_ctns(SEXP cpSEXP, SEXP lcSEXP, SEXP ySEXP, SEXP weightsSEXP, SEXP leaf_min_obsSEXP, SEXP leaf_min_eventsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type cp(cpSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lc(lcSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type leaf_min_obs(leaf_min_obsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type leaf_min_events(leaf_min_eventsSEXP);
    find_cutpoints_ctns(cp, lc, y, weights, leaf_min_obs, leaf_min_events);
    return R_NilValue;
END_RCPP
}
// find_cutpoints
void find_cutpoints(arma::vec& cp, const arma::vec& lc, const arma::mat& y, const arma::uvec weights, const arma::uword& leaf_min_obs, const arma::uword& leaf_min_events);
RcppExport SEXP _orsf2_find_cutpoints(SEXP cpSEXP, SEXP lcSEXP, SEXP ySEXP, SEXP weightsSEXP, SEXP leaf_min_obsSEXP, SEXP leaf_min_eventsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type cp(cpSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lc(lcSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type leaf_min_obs(leaf_min_obsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type leaf_min_events(leaf_min_eventsSEXP);
    find_cutpoints(cp, lc, y, weights, leaf_min_obs, leaf_min_events);
    return R_NilValue;
END_RCPP
}
// log_rank_test_wtd
double log_rank_test_wtd(arma::mat& y, arma::vec& g, arma::uvec& weights);
RcppExport SEXP _orsf2_log_rank_test_wtd(SEXP ySEXP, SEXP gSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type g(gSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_rank_test_wtd(y, g, weights));
    return rcpp_result_gen;
END_RCPP
}
// log_rank_test
double log_rank_test(arma::mat& y, arma::vec& g);
RcppExport SEXP _orsf2_log_rank_test(SEXP ySEXP, SEXP gSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type g(gSEXP);
    rcpp_result_gen = Rcpp::wrap(log_rank_test(y, g));
    return rcpp_result_gen;
END_RCPP
}
// cholesky
void cholesky(arma::mat& matrix);
RcppExport SEXP _orsf2_cholesky(SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type matrix(matrixSEXP);
    cholesky(matrix);
    return R_NilValue;
END_RCPP
}
// cholesky_solve
void cholesky_solve(arma::mat& matrix, arma::vec& y);
RcppExport SEXP _orsf2_cholesky_solve(SEXP matrixSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    cholesky_solve(matrix, y);
    return R_NilValue;
END_RCPP
}
// cholesky_invert
void cholesky_invert(arma::mat& matrix);
RcppExport SEXP _orsf2_cholesky_invert(SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type matrix(matrixSEXP);
    cholesky_invert(matrix);
    return R_NilValue;
END_RCPP
}
// newtraph_cph_iter
double newtraph_cph_iter(const arma::mat& x, const arma::mat& y, const arma::uvec& weights, const arma::vec& beta, arma::vec& u, arma::vec& a, arma::vec& a2, arma::mat& imat, arma::mat& cmat, arma::mat& cmat2, const arma::uword& method);
RcppExport SEXP _orsf2_newtraph_cph_iter(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP, SEXP betaSEXP, SEXP uSEXP, SEXP aSEXP, SEXP a2SEXP, SEXP imatSEXP, SEXP cmatSEXP, SEXP cmat2SEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type a(aSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type a2(a2SEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type imat(imatSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type cmat(cmatSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type cmat2(cmat2SEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(newtraph_cph_iter(x, y, weights, beta, u, a, a2, imat, cmat, cmat2, method));
    return rcpp_result_gen;
END_RCPP
}
// newtraph_cph
arma::mat newtraph_cph(const arma::mat& x, const arma::mat& y, const arma::uvec& weights, const arma::mat& x_transforms, const arma::uword& method, const double& eps, const arma::uword& iter_max, const bool& rescale);
RcppExport SEXP _orsf2_newtraph_cph(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP, SEXP x_transformsSEXP, SEXP methodSEXP, SEXP epsSEXP, SEXP iter_maxSEXP, SEXP rescaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x_transforms(x_transformsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double& >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type iter_max(iter_maxSEXP);
    Rcpp::traits::input_parameter< const bool& >::type rescale(rescaleSEXP);
    rcpp_result_gen = Rcpp::wrap(newtraph_cph(x, y, weights, x_transforms, method, eps, iter_max, rescale));
    return rcpp_result_gen;
END_RCPP
}
// make_node_name
String make_node_name(const arma::uword& part);
RcppExport SEXP _orsf2_make_node_name(SEXP partSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uword& >::type part(partSEXP);
    rcpp_result_gen = Rcpp::wrap(make_node_name(part));
    return rcpp_result_gen;
END_RCPP
}
// any_cps_valid
bool any_cps_valid(arma::vec& x);
RcppExport SEXP _orsf2_any_cps_valid(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(any_cps_valid(x));
    return rcpp_result_gen;
END_RCPP
}
// ostree_pred_leaf
arma::uvec ostree_pred_leaf(const arma::mat& x_new, const arma::mat& betas, const arma::umat& col_indices, const arma::vec& cut_points, const arma::vec& children_left);
RcppExport SEXP _orsf2_ostree_pred_leaf(SEXP x_newSEXP, SEXP betasSEXP, SEXP col_indicesSEXP, SEXP cut_pointsSEXP, SEXP children_leftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x_new(x_newSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type betas(betasSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type col_indices(col_indicesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cut_points(cut_pointsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type children_left(children_leftSEXP);
    rcpp_result_gen = Rcpp::wrap(ostree_pred_leaf(x_new, betas, col_indices, cut_points, children_left));
    return rcpp_result_gen;
END_RCPP
}
// ostree_pred_surv
arma::mat ostree_pred_surv(const arma::mat& x_new, const Rcpp::List& leaf_nodes, const arma::uvec& leaf_preds, const arma::vec& times);
RcppExport SEXP _orsf2_ostree_pred_surv(SEXP x_newSEXP, SEXP leaf_nodesSEXP, SEXP leaf_predsSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x_new(x_newSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type leaf_nodes(leaf_nodesSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type leaf_preds(leaf_predsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(ostree_pred_surv(x_new, leaf_nodes, leaf_preds, times));
    return rcpp_result_gen;
END_RCPP
}
// ostree_fit
List ostree_fit(arma::mat& x_inbag, arma::mat& y_inbag, const arma::uvec& weights, const arma::uword& nsplit, const arma::uword& mtry, const arma::uword& leaf_min_events, const arma::uword& leaf_min_obs, const arma::uword& cph_method, const double& cph_eps, const arma::uword& cph_iter_max, const double& cph_prune_thresh, const bool& cph_rescale);
RcppExport SEXP _orsf2_ostree_fit(SEXP x_inbagSEXP, SEXP y_inbagSEXP, SEXP weightsSEXP, SEXP nsplitSEXP, SEXP mtrySEXP, SEXP leaf_min_eventsSEXP, SEXP leaf_min_obsSEXP, SEXP cph_methodSEXP, SEXP cph_epsSEXP, SEXP cph_iter_maxSEXP, SEXP cph_prune_threshSEXP, SEXP cph_rescaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x_inbag(x_inbagSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y_inbag(y_inbagSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type nsplit(nsplitSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type leaf_min_events(leaf_min_eventsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type leaf_min_obs(leaf_min_obsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type cph_method(cph_methodSEXP);
    Rcpp::traits::input_parameter< const double& >::type cph_eps(cph_epsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type cph_iter_max(cph_iter_maxSEXP);
    Rcpp::traits::input_parameter< const double& >::type cph_prune_thresh(cph_prune_threshSEXP);
    Rcpp::traits::input_parameter< const bool& >::type cph_rescale(cph_rescaleSEXP);
    rcpp_result_gen = Rcpp::wrap(ostree_fit(x_inbag, y_inbag, weights, nsplit, mtry, leaf_min_events, leaf_min_obs, cph_method, cph_eps, cph_iter_max, cph_prune_thresh, cph_rescale));
    return rcpp_result_gen;
END_RCPP
}
// orsf_fit
List orsf_fit(arma::mat& x, arma::mat& y, const int& ntree, const arma::uword& nsplit, const arma::uword& mtry, const arma::uword& leaf_min_events, const arma::uword& leaf_min_obs, const arma::uword& cph_method, const double& cph_eps, const arma::uword& cph_iter_max, const double& cph_prune_thresh, const bool& cph_rescale);
RcppExport SEXP _orsf2_orsf_fit(SEXP xSEXP, SEXP ySEXP, SEXP ntreeSEXP, SEXP nsplitSEXP, SEXP mtrySEXP, SEXP leaf_min_eventsSEXP, SEXP leaf_min_obsSEXP, SEXP cph_methodSEXP, SEXP cph_epsSEXP, SEXP cph_iter_maxSEXP, SEXP cph_prune_threshSEXP, SEXP cph_rescaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int& >::type ntree(ntreeSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type nsplit(nsplitSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type leaf_min_events(leaf_min_eventsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type leaf_min_obs(leaf_min_obsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type cph_method(cph_methodSEXP);
    Rcpp::traits::input_parameter< const double& >::type cph_eps(cph_epsSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type cph_iter_max(cph_iter_maxSEXP);
    Rcpp::traits::input_parameter< const double& >::type cph_prune_thresh(cph_prune_threshSEXP);
    Rcpp::traits::input_parameter< const bool& >::type cph_rescale(cph_rescaleSEXP);
    rcpp_result_gen = Rcpp::wrap(orsf_fit(x, y, ntree, nsplit, mtry, leaf_min_events, leaf_min_obs, cph_method, cph_eps, cph_iter_max, cph_prune_thresh, cph_rescale));
    return rcpp_result_gen;
END_RCPP
}
// ostree_predict_
arma::mat ostree_predict_(const arma::mat& betas, const arma::umat& col_indices, const arma::vec& cut_points, const arma::vec& children_left, const List& leaf_nodes, arma::mat& x_new, const arma::mat& x_transforms, const arma::vec times, bool risk);
RcppExport SEXP _orsf2_ostree_predict_(SEXP betasSEXP, SEXP col_indicesSEXP, SEXP cut_pointsSEXP, SEXP children_leftSEXP, SEXP leaf_nodesSEXP, SEXP x_newSEXP, SEXP x_transformsSEXP, SEXP timesSEXP, SEXP riskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type betas(betasSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type col_indices(col_indicesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cut_points(cut_pointsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type children_left(children_leftSEXP);
    Rcpp::traits::input_parameter< const List& >::type leaf_nodes(leaf_nodesSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x_new(x_newSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x_transforms(x_transformsSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type times(timesSEXP);
    Rcpp::traits::input_parameter< bool >::type risk(riskSEXP);
    rcpp_result_gen = Rcpp::wrap(ostree_predict_(betas, col_indices, cut_points, children_left, leaf_nodes, x_new, x_transforms, times, risk));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_orsf2_x_scale_wtd", (DL_FUNC) &_orsf2_x_scale_wtd, 2},
    {"_orsf2_x_scale_unwtd", (DL_FUNC) &_orsf2_x_scale_unwtd, 1},
    {"_orsf2_x_new_scale_cph", (DL_FUNC) &_orsf2_x_new_scale_cph, 2},
    {"_orsf2_x_new_unscale_cph", (DL_FUNC) &_orsf2_x_new_unscale_cph, 2},
    {"_orsf2_leaf_surv_small", (DL_FUNC) &_orsf2_leaf_surv_small, 2},
    {"_orsf2_leaf_surv", (DL_FUNC) &_orsf2_leaf_surv, 2},
    {"_orsf2_node_summarize", (DL_FUNC) &_orsf2_node_summarize, 4},
    {"_orsf2_find_cutpoints_ctns", (DL_FUNC) &_orsf2_find_cutpoints_ctns, 6},
    {"_orsf2_find_cutpoints", (DL_FUNC) &_orsf2_find_cutpoints, 6},
    {"_orsf2_log_rank_test_wtd", (DL_FUNC) &_orsf2_log_rank_test_wtd, 3},
    {"_orsf2_log_rank_test", (DL_FUNC) &_orsf2_log_rank_test, 2},
    {"_orsf2_cholesky", (DL_FUNC) &_orsf2_cholesky, 1},
    {"_orsf2_cholesky_solve", (DL_FUNC) &_orsf2_cholesky_solve, 2},
    {"_orsf2_cholesky_invert", (DL_FUNC) &_orsf2_cholesky_invert, 1},
    {"_orsf2_newtraph_cph_iter", (DL_FUNC) &_orsf2_newtraph_cph_iter, 11},
    {"_orsf2_newtraph_cph", (DL_FUNC) &_orsf2_newtraph_cph, 8},
    {"_orsf2_make_node_name", (DL_FUNC) &_orsf2_make_node_name, 1},
    {"_orsf2_any_cps_valid", (DL_FUNC) &_orsf2_any_cps_valid, 1},
    {"_orsf2_ostree_pred_leaf", (DL_FUNC) &_orsf2_ostree_pred_leaf, 5},
    {"_orsf2_ostree_pred_surv", (DL_FUNC) &_orsf2_ostree_pred_surv, 4},
    {"_orsf2_ostree_fit", (DL_FUNC) &_orsf2_ostree_fit, 12},
    {"_orsf2_orsf_fit", (DL_FUNC) &_orsf2_orsf_fit, 12},
    {"_orsf2_ostree_predict_", (DL_FUNC) &_orsf2_ostree_predict_, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_orsf2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
