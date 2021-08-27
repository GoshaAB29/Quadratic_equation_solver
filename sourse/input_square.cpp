#include "../header/input_square.h"

void init_square (double *a, double *b, double *c)
{
    printf ("Welcome to the quadratic equation solver. "
            "I can solve equations like Ax ^ 2 + Bx + C = 0. "
            "Please enter these coefficients:\n");
    int attempt = 0;
    while (attempt != ATTEMPT_INPUT) {
        attempt = scanf ("%lf %lf %lf", a, b, c);

        if ((attempt != ATTEMPT_INPUT) || (!isfinite(*a)) ||
            (!isfinite(*b)) || (!isfinite(*c))) {

            while (getchar() != '\n')
                continue;

            printf ("ERROR of input: enter only numbers\n");
        }
    }
}
