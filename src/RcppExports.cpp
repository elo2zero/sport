// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bbt
List bbt(CharacterVector name, IntegerVector rank, NumericMatrix r, NumericMatrix rd, NumericVector sigma, NumericVector weight, CharacterVector identifier, double kappa, double gamma, double beta, double init_r, double init_rd);
RcppExport SEXP _sport_bbt(SEXP nameSEXP, SEXP rankSEXP, SEXP rSEXP, SEXP rdSEXP, SEXP sigmaSEXP, SEXP weightSEXP, SEXP identifierSEXP, SEXP kappaSEXP, SEXP gammaSEXP, SEXP betaSEXP, SEXP init_rSEXP, SEXP init_rdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rank(rankSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type rd(rdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type identifier(identifierSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type init_r(init_rSEXP);
    Rcpp::traits::input_parameter< double >::type init_rd(init_rdSEXP);
    rcpp_result_gen = Rcpp::wrap(bbt(name, rank, r, rd, sigma, weight, identifier, kappa, gamma, beta, init_r, init_rd));
    return rcpp_result_gen;
END_RCPP
}
// dbl
Rcpp::List dbl(CharacterVector name, IntegerVector rank, NumericMatrix X, NumericVector R, NumericVector RD, NumericVector beta, NumericVector weight, CharacterVector identifier, double kappa);
RcppExport SEXP _sport_dbl(SEXP nameSEXP, SEXP rankSEXP, SEXP XSEXP, SEXP RSEXP, SEXP RDSEXP, SEXP betaSEXP, SEXP weightSEXP, SEXP identifierSEXP, SEXP kappaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rank(rankSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type RD(RDSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type identifier(identifierSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    rcpp_result_gen = Rcpp::wrap(dbl(name, rank, X, R, RD, beta, weight, identifier, kappa));
    return rcpp_result_gen;
END_RCPP
}
// factor2dummy
IntegerMatrix factor2dummy(SEXP factor);
RcppExport SEXP _sport_factor2dummy(SEXP factorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type factor(factorSEXP);
    rcpp_result_gen = Rcpp::wrap(factor2dummy(factor));
    return rcpp_result_gen;
END_RCPP
}
// glicko
List glicko(CharacterVector name, std::vector<int> rank, NumericVector r, NumericVector rd, NumericVector sigma, NumericVector weight, CharacterVector identifier, double init_r, double init_rd, double gamma, double kappa);
RcppExport SEXP _sport_glicko(SEXP nameSEXP, SEXP rankSEXP, SEXP rSEXP, SEXP rdSEXP, SEXP sigmaSEXP, SEXP weightSEXP, SEXP identifierSEXP, SEXP init_rSEXP, SEXP init_rdSEXP, SEXP gammaSEXP, SEXP kappaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type rank(rankSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rd(rdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type identifier(identifierSEXP);
    Rcpp::traits::input_parameter< double >::type init_r(init_rSEXP);
    Rcpp::traits::input_parameter< double >::type init_rd(init_rdSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    rcpp_result_gen = Rcpp::wrap(glicko(name, rank, r, rd, sigma, weight, identifier, init_r, init_rd, gamma, kappa));
    return rcpp_result_gen;
END_RCPP
}
// glicko2
List glicko2(CharacterVector name, std::vector<int> rank, NumericVector r, NumericVector rd, NumericVector sigma, NumericVector weight, double kappa, CharacterVector identifier, double tau, double init_r, double init_rd);
RcppExport SEXP _sport_glicko2(SEXP nameSEXP, SEXP rankSEXP, SEXP rSEXP, SEXP rdSEXP, SEXP sigmaSEXP, SEXP weightSEXP, SEXP kappaSEXP, SEXP identifierSEXP, SEXP tauSEXP, SEXP init_rSEXP, SEXP init_rdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type rank(rankSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rd(rdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type identifier(identifierSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type init_r(init_rSEXP);
    Rcpp::traits::input_parameter< double >::type init_rd(init_rdSEXP);
    rcpp_result_gen = Rcpp::wrap(glicko2(name, rank, r, rd, sigma, weight, kappa, identifier, tau, init_r, init_rd));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sport_bbt", (DL_FUNC) &_sport_bbt, 12},
    {"_sport_dbl", (DL_FUNC) &_sport_dbl, 9},
    {"_sport_factor2dummy", (DL_FUNC) &_sport_factor2dummy, 1},
    {"_sport_glicko", (DL_FUNC) &_sport_glicko, 11},
    {"_sport_glicko2", (DL_FUNC) &_sport_glicko2, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_sport(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
