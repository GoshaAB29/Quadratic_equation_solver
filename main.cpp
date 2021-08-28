#include "header/input_square.h"
#include "header/solve_square.h"
#include "header/output_square.h"
#include "unit test/test_square.h"

//! main function

int main ()
{
    int test = run_unit_tests ();

    double a = NAN, b = NAN, c = NAN;
    input_square (&a, &b, &c);

    double  ans1 = NAN, ans2 = NAN;
    int num_ans = solve_square (a, b, c, &ans1, &ans2);

    output_square (num_ans, &ans1, &ans2);

    return 0;
}
