#include "../unit test/test_square.h"

void test_output (int test_num, double x1, double x2)
{
            switch (test_num) {
            case 0:
                break;
            case 1:
                printf ("x = %lf", x1);
                break;
            case 2:
                printf ("x1 = %lf, x2 = %lf", x1, x2);
                break;
            default:
                printf ("ERROR: the number of answers is incorrect");
            }
}

int UnitTest_Square (int test_num, int num_ans_best, double ans1_best,
                     double ans2_best, double a, double b, double c) {
    double ans1 = NAN, ans2 = NAN;
    int num_ans = solve_square (a, b, c, &ans1, &ans2);

    if ((!is_equal (num_ans, num_ans_best)) ||
        (!is_equal (ans1, ans1_best)) || (!is_equal (ans2, ans2_best))) {

            printf ("Test %d failed, in result: %d answers.", test_num, num_ans);
            test_output (num_ans, ans1, ans2);

            printf ("Should be: %d answers", num_ans_best);
            test_output (num_ans_best, ans1_best, ans2_best);

            return 1;
    } else
    return 0;
}

int Run_Unit_Tests ()
{
    int failed = 0;

    failed = failed + UnitTest_Square (1, INF_ANS, NAN, NAN, 0, 0, 0);
    failed = failed + UnitTest_Square (2, ZERO_ANS, NAN, NAN, 0, 0, 3);
    failed = failed + UnitTest_Square (3, 0, NAN, NAN, 5, -6, 7);
    failed = failed + UnitTest_Square (5, 1, -1, NAN, 1, 2, 1);
    failed = failed + UnitTest_Square (6, 2, 4, -2, 1, -2, -8);
    failed = failed + UnitTest_Square (7, 1, -0.500, NAN, 0, 2, 1);

    return failed;
}

