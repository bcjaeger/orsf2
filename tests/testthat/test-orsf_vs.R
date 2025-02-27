
test_that(
 desc = "Survival variable selection filters junk preds",
 code = {

  pbc_with_junk <- pbc

  n_junk_preds <- 5

  junk_names <- paste("junk", seq(n_junk_preds), sep ='_')

  set.seed(329)

  for(i in junk_names)
   pbc_with_junk[[i]] <- rnorm(nrow(pbc))

  fit <- orsf(pbc_with_junk,
              time + status ~ .,
              n_tree = n_tree_test,
              importance = 'anova',
              tree_seeds = seeds_standard)

  fit_var_select <- orsf_vs(fit, n_predictor_min = 3)

  vars_picked <- fit_var_select$predictors_included[[1]]

  expect_false( any(junk_names %in% vars_picked) )

 }
)

test_that(
 desc = "Classification variable selection filters junk preds",
 code = {

  penguins_with_junk <- penguins

  n_junk_preds <- 5

  junk_names <- paste("junk", seq(n_junk_preds), sep ='_')

  set.seed(329)

  for(i in junk_names)
   penguins_with_junk[[i]] <- rnorm(nrow(penguins))

  fit <- orsf(penguins_with_junk,
              species ~ .,
              n_tree = n_tree_test,
              importance = 'permute',
              tree_seeds = seeds_standard)

  fit_var_select <- orsf_vs(fit, n_predictor_min = 3,
                            verbose_progress = TRUE)

  vars_picked <- fit_var_select$predictors_included[[1]]

  expect_false( any(junk_names %in% vars_picked) )

 }
)

test_that(
 desc = "Regression variable selection filters junk preds",
 code = {

  penguins_with_junk <- penguins

  n_junk_preds <- 5

  junk_names <- paste("junk", seq(n_junk_preds), sep ='_')

  set.seed(329)

  for(i in junk_names)
   penguins_with_junk[[i]] <- rnorm(nrow(penguins))

  fit <- orsf(penguins_with_junk,
              species ~ .,
              n_tree = n_tree_test,
              importance = 'permute',
              no_fit = TRUE,
              tree_seeds = seeds_standard)

  fit_var_select <- orsf_vs(fit, n_predictor_min = 3)

  vars_picked <- fit_var_select$predictors_included[[1]]

  expect_false( any(junk_names %in% vars_picked) )

 }
)

test_that(
 desc = "variable selection can go down to 1 predictor",
 code = {

  fit_cars <- orsf(mpg ~ ., data = mtcars, n_tree = n_tree_test)

  vs <- orsf_vs(fit_cars, n_predictor_min = 1)

  # assert that we eliminated 1 predictor at each step and got down to
  # 1 remaining predictor
  expect_equal(nrow(vs), ncol(mtcars) - 1)
  expect_length(vs$variables_included[[1]], 1)
  expect_length(vs$predictors_included[[1]], 1)

 }
)

test_that(
 desc = "variable selection with step size > 1",
 code = {

  fit_cars <- orsf(mpg ~ ., data = mtcars, n_tree = n_tree_test)

  vs_size_2 <- orsf_vs(fit_cars, n_predictor_min = 1, n_predictor_drop = 2)

  # assert that we eliminated 2 predictors at each step and got down to
  # 1 remaining predictor
  expect_equal(vs_size_2$n_predictors, c(1,2,4,6,8,10))

 }
)

test_that(
 desc = "importance specification is required",
 code = {

  fit_cars <- orsf(mpg ~ ., data = mtcars,
                   n_tree = n_tree_test,
                   importance = 'none')

  expect_error(orsf_vs(fit_cars), regexp = 'must be specified')

 }
)


