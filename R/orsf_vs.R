
#' Variable selection
#'
#' @inheritParams predict.ObliqueForest
#' @param n_predictor_min (*integer*) the minimum number of predictors allowed
#' @param n_predictor_drop (*integer*) the number of predictors dropped at each step
#' @param verbose_progress (*logical*) not implemented yet. Should progress be printed to the console?
#'
#' @return a [data.table][data.table::data.table-package] with four columns:
#'   - *n_predictors*: the number of predictors used
#'   - *stat_value*: the out-of-bag statistic
#'   - *variables_included*: the names of the variables included
#'   - *predictors_included*: the names of the predictors included
#'   - *predictor_dropped*: the predictor selected to be dropped
#'
#' @details
#'
#' The difference between `variables_included` and `predictors_included` is
#'  referent coding. The `variable` would be the name of a factor variable
#'  in the training data, while the `predictor` would be the name of that
#'  same factor with the levels of the factor appended. For example, if
#'  the variable is `diabetes` with `levels = c("no", "yes")`, then the
#'  variable name is `diabetes` and the predictor name is `diabetes_yes`.
#'
#' `tree_seeds` should be specified in `object` so that each successive run
#'   of `orsf` will be evaluated in the same out-of-bag samples as the initial
#'   run.
#'
#' @export
#'
#' @examples
#'
#' object <- orsf(formula = time + status ~ .,
#'                data = pbc_orsf,
#'                n_tree = 25,
#'                importance = 'anova')
#'
#' orsf_vs(object, n_predictor_min = 15)

orsf_vs <- function(object,
                    n_predictor_min = 3,
                    n_predictor_drop = 1,
                    verbose_progress = NULL){

 if(object$importance_type == 'none'){
  stop("object must be specified with importance",
       "of 'anova', 'negate', or 'permute'",
       call. = FALSE)
 }

 check_arg_is(arg_value = object,
              arg_name = 'object',
              expected_class = 'ObliqueForest')

 check_arg_type(arg_value = n_predictor_min,
                arg_name = 'n_predictor_min',
                expected_type = 'numeric')

 check_arg_is_integer(arg_value = n_predictor_min,
                      arg_name = 'n_predictor_min')

 check_arg_gteq(arg_value = n_predictor_min,
                arg_name = 'n_predictor_min',
                bound = 1)


 check_arg_type(arg_value = n_predictor_drop,
                arg_name = 'n_predictor_drop',
                expected_type = 'numeric')

 check_arg_is_integer(arg_value = n_predictor_drop,
                      arg_name = 'n_predictor_drop')

 check_arg_lt(arg_value = n_predictor_min,
              arg_name = 'n_predictor_min',
              bound = length(object$get_names_x()),
              append_to_msg = "(total number of predictors)")

 check_arg_length(arg_value = n_predictor_min,
                  arg_name = 'n_predictor_min',
                  expected_length = 1)

 verbose_progress <- verbose_progress %||% object$verbose_progress

 check_arg_type(arg_value = verbose_progress,
                arg_name = 'verbose_progress',
                expected_type = 'logical')

 check_arg_length(arg_value = verbose_progress,
                  arg_name = 'verbose_progress',
                  expected_length = 1)

 object$select_variables(n_predictor_min,
                         n_predictor_drop,
                         verbose_progress)

}


