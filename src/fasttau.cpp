#include <Rcpp.h>
using namespace Rcpp;

//' Compute Kendall's Tau-A
//'
//' @param x A vector of values
//' @param y A vector of values (each y-value forms a pair with the corresponding x-value)
//' @export
// [[Rcpp::export]]
double fasttau(NumericVector x, NumericVector y) {

  // Assume no missing values
  // Assume there are no rank ties either


  // Need the vector length
  int n = x.size();


  // The formula involves the number of concurrent and
  // discordant pairs
  int numConcurrent = 0;
  int numDiscordant = 0;


  // Iterate through the x, y pairs
  for (int i = 0; i < n; i++) {

    // Check other x, y pairs
    // (With no repeated checks)
    for (int j = i + 1; j < n; j++) {

      // If both x_i and y_i are greater
      // than x_j and y_j, concurrent
      if (x[i] > x[j] && y[i] > y[j]) {

        numConcurrent++;

        // If both are less than x_j and y_j,
        // that works too
      } else if (x[i] < x[j] && y[i] < y[j]) {

        numConcurrent++;

        // Discordant pairs have one comparison greater
        // and another less
      } else if (x[i] > x[j] && y[i] < y[j]) {

        numDiscordant++;

      } else if (x[i] < x[j] && y[i] > y[j]) {

        numDiscordant++;

      }
    }
  }


  // Compute the correlation using these pairs
  return ((numConcurrent - numDiscordant) / ((double)n * (double)(n - 1) / 2.0));

}

