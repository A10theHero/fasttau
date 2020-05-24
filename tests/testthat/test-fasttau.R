test_that("Correct Correlation (Simple Case)", {

  x <- c(1, 2, 3, 4)
  y <- c(5, 6, 7, 8)

  expect_equal(fasttau(x, y), cor(x, y, method = "kendall"))
})

test_that("Correct Correlation (More Complex Case))", {

  x <- sample(1:100, 10, replace = FALSE)
  y <- sample(1:100, 10, replace = FALSE)

  expect_equal(fasttau(x, y), cor(x, y, method = "kendall"))
})

test_that("Correct Correlation (Complex Case))", {

  x <- sample(1:500, 100, replace = FALSE)
  y <- sample(1:500, 100, replace = FALSE)

  expect_equal(fasttau(x, y), cor(x, y, method = "kendall"))
})
