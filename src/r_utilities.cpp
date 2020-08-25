#include "r_utilities.h"
#include "r_init.h"

SEXP sexp_typeof(SEXP x) {
    return Rf_ScalarInteger(TYPEOF(x));
}

SEXP mark_parsed_expression(SEXP x, SEXP parse_fun_name) {
    Rf_setAttrib(x, R_ParsedExpressionAttrib, parse_fun_name);
    return x;
}