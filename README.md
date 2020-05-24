
<!-- README.md is generated from README.Rmd. Please edit that file -->

# fasttau

<!-- badges: start -->

<!-- badges: end -->

The goal of fasttau is to compute Kendall’s Tau-A quickly (using C++)

## Installation

You can install the released version of fasttau from
[CRAN](https://CRAN.R-project.org) with:

``` r
install.packages("fasttau")
```

And the development version from [GitHub](https://github.com/) with:

``` r
# install.packages("devtools")
devtools::install_github("a10thehero/fasttau")
```

## Example

This is a basic example which shows you how to solve a common problem:

``` r
library(fasttau)

x <- c(1, 2)
y <- c(3, 4)

fasttau(x, y)
#> [1] 1
```
