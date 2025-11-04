#include <Rcpp.h>
#include <algorithm>
using namespace Rcpp;
using namespace std;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
double cube(double x){
  return x * x * x;
}

// [[Rcpp::export]]
double median_cpp_new(NumericVector x){
  NumericVector y = clone(x);
  int n = y.size();
  sort(y.begin(), y.end());
  if (n % 2 == 0) {
    return (y[n/2-1] + y[n/2])/2;
  } else {
    return y[n/2];
  }
}
