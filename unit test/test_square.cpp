#include "../unit test/test_square.h"

square_equation tests[6];

void tests_init ()
{
    tests[0].test_num = 1;
    tests[0].num_ans_true = INF_ANS;
    tests[0].ans1_true = NAN;
    tests[0].ans2_true = NAN;
    tests[0].a = 0;
    tests[0].b = 0;
    tests[0].c = 0;

    tests[1].test_num = 2;
    tests[1].num_ans_true = ZERO_ANS;
    tests[1].ans1_true = NAN;
    tests[1].ans2_true = NAN;
    tests[1].a = 0;
    tests[1].b = 0;
    tests[1].c = 3;

    tests[2].test_num = 3;
    tests[2].num_ans_true = 1;
    tests[2].ans1_true = 0.5;
    tests[2].ans2_true = NAN;
    tests[2].a = 0;
    tests[2].b = 2;
    tests[2].c = -1;

    tests[3].test_num = 4;
    tests[3].num_ans_true = ZERO_ANS;
    tests[3].ans1_true = NAN;
    tests[3].ans2_true = NAN;
    tests[3].a = 5;
    tests[3].b = -6;
    tests[3].c = 7;

    tests[4].test_num = 5;
    tests[4].num_ans_true = 1;
    tests[4].ans1_true = -1;
    tests[4].ans2_true = NAN;
    tests[4].a = 1;
    tests[4].b = 2;
    tests[4].c = 1;

    tests[5].test_num = 6;
    tests[5].num_ans_true = 2;
    tests[5].ans1_true = 4;
    tests[5].ans2_true = -2;
    tests[5].a = 1;
    tests[5].b = -2;
    tests[5].c = -8;
}

void test_output (int test_num, double x1, double x2)
{
    switch (test_num) {
        case 0:
            printf ("\n");
            break;

        case 1:
            printf ("x = %.3lf;\n", x1);
            break;

        case 2:
            printf ("x1 = %.3lf, x2 = %.3lf;\n", x1, x2);
            break;

        default:
            printf ("ERROR: the number of answers is incorrect\n");
        }
}

int unit_test_square (square_equation tests) {
    double ans1 = NAN, ans2 = NAN;

    int num_ans = solve_square (tests.a, tests.b, tests.c, &ans1, &ans2);

    if ((!is_equal (num_ans, tests.num_ans_true)) ||
        (!is_equal (ans1, tests.ans1_true)) || (!is_equal (ans2, tests.ans2_true))) {

            printf ("Test %d failed, in result: %d answers. ", tests.test_num, num_ans);
            test_output (num_ans, ans1, ans2);

            printf ("Test is %.3lfx^2 + %.3lfx + %.3lf.\n", tests.a, tests.b, tests.c);

            printf ("Should be: %d answers, ", tests.num_ans_true);
            test_output (tests.num_ans_true, tests.ans1_true, tests.ans2_true);

            return 1;
    } else
    return 0;
}

int run_unit_tests ()
{
    int failed = 0;

    tests_init ();

    for (int number_of_test = 0; number_of_test < 6; ++number_of_test)
        failed += unit_test_square (tests[number_of_test]);

    printf ("Testing errors: %d\n", failed);

    return failed;
}

