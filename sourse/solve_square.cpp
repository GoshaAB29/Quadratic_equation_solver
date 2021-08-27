#include "../header/solve_square.h"

bool is_equal (double val1, double val2)
{
    if ((val1 != val1) && (val2 != val2))
        return true;
    else
        return ((fabs(val1 - val2) < PRECISION) ? true : false);
}

int solve_full_square (double a, double b, double c, double *x1, double *x2)
{
    double  D = b * b - 4 * a * c;
    assert (isfinite (D));

    if ((is_equal (D, 0) == false) && (D > 0)) {
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b / a) - *x1;
        return TWO_ANS;
    } else {                                                //  если D <= 0
        if (is_equal (D, 0) == true) {
        *x1 = -b / (2 * a);
        return ONE_ANS;

        } else {
            *x1 = *x2 = NAN;                                // если D < 0
            return ZERO_ANS;
        }
    }
}


int solve_linear (double b, double c, double *x)
{
    assert (isfinite (b));
    assert (isfinite (c));
    assert (b);

    *x = -c / b;

    return ONE_ANS;
}

int solve_square (double a, double b, double c, double *x1, double *x2) // полное квадратное уравнение (а != 0, b != 0, c != 0), return - количество корней
{
    assert (isfinite (a));
    assert (isfinite (b));
    assert (isfinite (c));

    assert (x1);
    assert (x1 != x2);

    int num_ans = ERROR_ANS;

    if ((is_equal (a, 0) == true) && (is_equal (b, 0) == false)) {             // a = 0, b != 0
        num_ans = solve_linear (b, c, x1);

    } else {                                                                   // a = 0, b = 0
        if ((is_equal (a, 0) == true) && (is_equal (b, 0) == true)) {
            (is_equal (c, 0) == true) ? num_ans = INF_ANS : num_ans = ZERO_ANS;

        } else {
            num_ans = solve_full_square (a, b, c, x1, x2);                     // a != 0
        }
    }

    return num_ans;
}
