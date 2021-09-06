#include "../header/input_square.h"

void clear_buffer ()
{
    while (getchar() != '\n') ;
}

void input_square (double *a, double *b, double *c)
{
    assert (isfinite((int)a));
    assert (isfinite((int)b));
    assert (isfinite((int)c));

    printf ("Welcome to the quadratic equation solver. "
            "I can solve equations like Ax^2 + Bx + C = 0. "
            "Please enter these coefficients:");

    int attempt = 0;

    while (attempt != COEFFS_COUNT) {
        attempt = scanf ("%lf %lf %lf", a, b, c);

        clear_buffer ();

        if ((attempt != COEFFS_COUNT) || (!isfinite(*a)) ||
            (!isfinite(*b)) || (!isfinite(*c))) {

            printf ("ERROR of input: enter only numbers."
                    "Please, re-enter coefficients.\n");
        }
    }
}
