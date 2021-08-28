/// \brief Function testing for correctness
#pragma once
#include <stdio.h>
#include <math.h>
#include "../header/solve_square.h"

/// test values ​​needed to check the correctness program
struct square_equation
{
int test_num;                                      ///< test equation number
int num_ans_true;                                  ///< correct number of roots in the equation
double ans1_true;                                  ///< correct value of the 1st answer of the equation
double ans2_true;                                  ///< correct value of the 2st answer of the equation
double a;                                          ///< coefficient in front of x^2
double b;                                          ///< coefficient in front of x
double c;                                          ///< free coefficient

};

///initialization of tests
void test_init ();

//-----------------------------------------------
//! Print of roots depending on their number
//!
//! @param [in] test_num - number of answers
//! @param [in] x1, x2 - roots of the equation
//!
//-----------------------------------------------

void test_output (int test_num, double x1, double x2);

//-----------------------------------------------
//! Calculating roots and verifying the answers
//!
//! @param [in] test_num - number of answers (in program)
//! @param [in] num_ans_best - number of answers ( in test)
//! @param [in] ans1_best, ans2_best - answers of the equation (in test)
//! @param [in] a, b, c - coefficients
//!
//! @return 1 if error and 0 if true
//!
//-----------------------------------------------

int unit_test_square (square_equation tests);

//-----------------------------------------------
//! Calling tests and counting ERRORs
//!
//!  @return failed - number of failed tests
//!
//-----------------------------------------------

int run_unit_tests ();
