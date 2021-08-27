#pragma once
#include <math.h>
#include <assert.h>

const double PRECISION = 0.001;

enum solve_status {
    ZERO_ANS = 0,
    ONE_ANS = 1,
    TWO_ANS = 2,
    INF_ANS = 3,
    ERROR_ANS = -1,
};

bool is_equal (double val1, double val2);

int solve_full_square (double a, double b, double c, double *x1, double *x2);

int solve_linear (double b, double c, double *x);

int solve_square (double a, double b, double c, double *x1, double *x2);

