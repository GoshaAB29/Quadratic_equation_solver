#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header/input_square.h"
#include "header/solve_square.h"
#include "header/output_square.h"
#include "unit test/test_square.h"

int main ()
{
    int test = Run_Unit_Tests ();

    printf ("%d\n", test);

    double a = NAN, b = NAN, c = NAN;
    init_square (&a, &b, &c);

    double  ans1 = 0, ans2 = 0;
    int num_ans = solve_square (a, b, c, &ans1, &ans2);
    output_square (num_ans, &ans1, &ans2);

    return 0;
}
