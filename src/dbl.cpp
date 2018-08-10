#include <RcppArmadillo.h>
using namespace Rcpp;
#include "dbl.h"

//' Dynamic Bayesian Logit
//' 
//' Calculates ratings using extended Kalman Filter.
//' @param rank.
//' @param R Matrix of coefficients (ratings).
//' @param X Matrix of player specifics.
//' @param RD Matrix of coefficients deviations
//' @return \code{r} updated ratings of participats
//' @return \code{rd} updated deviations of participants ratings
//' @return \code{expected} matrix of expected score. \code{expected[i, j] = P(i > j)} 
//' @export
// [[Rcpp::export]]
Rcpp::List 
  dbl(
    CharacterVector team_name,
    IntegerVector rank,
    NumericMatrix X,
    NumericVector R, 
    NumericVector RD,
    NumericVector sig,
    NumericVector weight
  ) {
    int n = X.nrow();
    int k = X.ncol();
    int idx = 0;
    double pi = 3.1415926535;
    double s2;
    double Ks;
    double p;
    double y;
    double y_var;
    double error;
    
    CharacterVector team2(n*n-n);
    CharacterVector team1(n*n-n);
    NumericVector P(n*n-n);
    NumericVector Y(n*n-n);
    NumericVector r_update(k);
    NumericVector rd_update(k);

    NumericVector x_i(k);
    NumericVector x_q(k);
    NumericVector h_i(k);
    NumericVector h_q(k);
    NumericVector s_i(k);
    NumericVector s_q(k);
    NumericVector omega_i(k);
    NumericVector omega_q(k);
    
    NumericMatrix OMEGA( n , k );
    NumericMatrix DELTA( n , k );
    
    // state transition apriori assumption about R and RD, related to `F` and `R` parameters
    //R = R * F;
    //RD = RD * R;

    for(int i = 0; i < n; i++){
      x_i = R;
      h_i = X(i,_);
      s_i = RD * sig( i );
      
      for(int q = 0; q<n; q++ ){
        if(i!=q){
          idx += 1; 
          team1( idx - 1 ) = team_name(i);
          team2( idx - 1 ) = team_name(q);
          
          x_q = R;
          h_q = -X(q,_);
          s_q = RD;
          
          // activation variance
          s2 = sum( h_i * s_i * h_i ) + sum( h_q * s_q * h_q );
          Ks = 1/sqrt( 1 + (pi * s2)/8 );
          
          // probability and output
          p = 1/( 1 + exp( -Ks * ( sum(x_i * h_i) - sum(x_q * h_q) )  ) );
          y = dlr_calc_y( rank( i ) , rank( q ) );
          error = y - p;
          
          P( idx - 1 ) = p;
          Y( idx - 1 ) = y;
          
          
          // calculating update
          if(i < q){
            y_var = 1/( 1+p*(1-p)*s2  );
            
            OMEGA(i,_) =  OMEGA(i,_) + ( ( s_i * y_var ) * ( h_i * error ) );
            OMEGA(q,_) =  OMEGA(q,_) + ( ( s_q * y_var ) * ( h_q * error ) );
            DELTA(i,_) = DELTA(i,_) +  
              ( p*(1 - p) * y_var  ) * 
              ( s_i * h_i ) * 
              ( s_i * h_i ); 
            
            DELTA(q,_) = DELTA(q,_) + 
              ( p * (1 - p) * y_var  ) * 
              ( s_q * h_q ) * 
              ( s_q * h_q ); 
            
          }
        }
      }
    }
    
    for(int i = 0; i < k; i++){
      RD(i) += -sum( DELTA(_,i) * weight ) / (k*1.0 - 1.0);
      R(i)  +=  sum( OMEGA(_,i) * weight ) / (k*1.0 - 1.0);
    }
    
    // UPDATE according to mapping

    r_update.names() = colnames(X);
    rd_update.names() = colnames(X);
    
    return Rcpp::List::create(
      Rcpp::Named("r") = R,
      Rcpp::Named("rd") = RD,
      Rcpp::Named("OMEGA") = OMEGA,
      Rcpp::Named("DELTA") = DELTA,
      Rcpp::Named("pairs") = DataFrame::create(
        Rcpp::Named("team1") = team1,
        Rcpp::Named("team2") = team2,
        Rcpp::Named("P") = P,
        Rcpp::Named("Y") = Y
      )
    );
    
    }