#pragma once
#include <stdio.h>
#include <math.h>
#include "../header/solve_square.h"

void test_output (int test_num, double x1, double x2);

int UnitTest_Square (int test_num, int num_ans_best, double ans1_best,
                     double ans2_best, double a, double b, double c);

int Run_Unit_Tests ();
