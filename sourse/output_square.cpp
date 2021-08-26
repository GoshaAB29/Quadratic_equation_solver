#include <stdio.h>
#include "../header/output_square.h"

void output_square (int kolvoans, double *ans1, double *ans2)
{
    switch (kolvoans) {
            case 0:
                printf ("The equation hasn't roots");
                break;

            case 1:
                printf ("The equation has a single root: x=%.3lf\n", ans1);
                break;

            case 2:
                printf ("The equation has two roots: %.3lf and %.3lf\n", ans1, ans2);
                break;

            default:
                printf ("ERROR, number of solutions is impossible");
        }
}
