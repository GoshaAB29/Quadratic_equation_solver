#pragma once

const double PRECISION = 0.001;

enum results {
    ZERO_ANS = 0,
    ONE_ANS,
    TWO_ANS,
    INF_ANS,
};

bool is_equal (double val1, double val2);

void solve_linear (double b, double c, double *x);

int solve_square (double a, double b, double c, double *x1, double *x2);

