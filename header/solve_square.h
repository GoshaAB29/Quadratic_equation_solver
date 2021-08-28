/// calculating everything needed to solve the equation

#pragma once
#include <math.h>
#include <assert.h>

/// Precision of comparing numbers

const static double PRECISION = 0.001;

///Possible options for the number of equation answers
enum solve_status {
    ZERO_ANS = 0,                              ///< no solutions
    ONE_ANS = 1,                               ///< one answer
    TWO_ANS = 2,                               ///< two answers
    INF_ANS = 3,                               ///< infinity of answers
    ERROR_ANS = -1,                            ///< an error has occurred

};

//-----------------------------------------------
//! Compares 2 numbers
//!
//! @param [in] val1, val2 - compared numbers
//!
//! @return truth
//!
//! @note not numbers are considered equal
//!
//-----------------------------------------------

bool is_equal (double val1, double val2);

//-----------------------------------------------
//! Solve the special case of the quadratic equation when the coefficient a! = 0
//!
//! @param [in] a, b, c - coefficients
//! @param [out] x1 - pointer to the 1st answer
//! @param [out] x2 - pointer to the 2st answer
//!
//! @Sreturn Number of answers
//!
//-----------------------------------------------

int solve_full_square (double a, double b, double c, double *x1, double *x2);

//-----------------------------------------------
//! Solve a linear equation - one of the special cases of a quadratic equation
//!
//! @param [in] b, c - coefficients
//! @param [out] x - answer linear equation
//!
//! @return Number of answers
//!
//-----------------------------------------------

int solve_linear (double b, double c, double *x);

//-----------------------------------------------
//! Solves a square equation ax^2 + bx + c = 0
//!
//! @param [in] a, b, c - coefficients
//! @param [out] x1 - pointer to the 1st answer
//! @param [out] x2 - pointer to the 2st answer
//!
//! @return Number of answers
//!
//!  @note In case of Error, returns ERROR_ANS
//!
//-----------------------------------------------

int solve_square (double a, double b, double c, double *x1, double *x2);

