#include "../header/output_square.h"

void output_square (int num_ans, double *ans1, double *ans2)
{
    assert (isfinite (num_ans));

    switch (num_ans) {
        case ZERO_ANS:
            printf ("The equation hasn't roots");
            break;

        case ONE_ANS:
            printf ("The equation has a single root: x=%.3lf\n", *ans1);
            break;

        case TWO_ANS:
            printf ("The equation has two roots: %.3lf and %.3lf\n", *ans1, *ans2);
            break;

        case INF_ANS:
            printf ("The equation has an infinite number of roots\n");
            break;

        default:
            printf ("ERROR, number of solutions is impossible\n");
    }
}

