#include "../header/solve_square.h"

bool is_equal (double val1, double val2)
{
    return ((fabs(val1 - val2) < PRECISION)? true : false);
}


void solve_linear (double b, double c, double *x)
{
    assert (isfinite (b));
    assert (isfinite (c));

    assert (x != 0);

    *x = -b / c;
}

int solve_square (double a, double b, double c, double *x1, double *x2) // полное квадратное уравнение (а != 0, b != 0, c != 0), return - количество корней
{
    assert (isfinite (a));
    assert (isfinite (b));
    assert (isfinite (c));                  //enum

    assert (x1 != 0);
    assert (x1 != x2);

    double  D = b * b - 4 * a * c;
    assert (isfinite (D));

    if (D > 0.0) {
        *x1 = (-b + sqrt(D)) / 2 / a;
        *x2 = (-b / a) - *x1;
        return 2;
    } else {                           //  если D <= 0
        if (is_equal (D, 0) == true) {
            *x1 = -b / (2 * a);
            return 1;
        }

         else {                       // если D < 0
            return 0;
        }
    }
}
