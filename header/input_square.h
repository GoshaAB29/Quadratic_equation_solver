/// variable input
#pragma once
#include <math.h>
#include <stdio.h>

/// number of entered
const static int COEFFS_COUNT = 3;
/// Clearing the input buffer
void clear_buffer ();

//-----------------------------------------------
//! Input of coefficients with correctness check
//!
//! @param [out] a, b, c - quadratic coefficients
//!
//-----------------------------------------------

void input_square (double *a, double *b, double *c);
