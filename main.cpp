#include "TXLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header/solve_square.h"
#include "header/output_square.h"
#include "header/input_square.h"

int main ()     //functions : input, solve_square,
{
    double a = 0, b = 0, c = 0;

    printf ("Welcome to the quadratic equation solver. I can solve equations like Ax ^ 2 + Bx + C = 0. Please enter these coefficients:\n");
    scanf ("%lf %lf %lf", &a, &b, &c);

    while ((getchar() != '\n') && (getchar() != EOF))
    continue;

    double  ans1 = 0, ans2 = 0;

    if (is_equal (a, 0)) {
        if (is_equal (b, 0)) {
            if (is_equal (c, 0)) {
                printf ("The equation has infinity of solutions\n");
            } else {                   // a = 0, b = 0, c != 0
                zero_ans ();
            }
        } else {                       // a = 0, b != 0, c != 0
            solve_linear (b, c, &ans1);
            printf ("The equation has a single root: x=%.3lf\n", ans1);
        }
    } else {                           // a != 0, b != 0, c != 0
        int kolvoans = solve_square (a, b, c, &ans1, &ans2);

        switch (kolvoans) {
            case 0:
                zero_ans ();
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

    return 0;
}
