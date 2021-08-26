#include "TXLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header/solve_square.h"
#include "header/output_square.h"
#include "header/input_square.h"

int main ()     //сделать functions : input, solve_square,
{
    double a = 0, b = 0, c = 0;
    init_square (&a, &b, &c);

    double  ans1 = 0, ans2 = 0;
    int kolvoans = solve_square (a, b, c, &ans1, &ans2);
    output_square (kolvoans, &ans1, &ans2);

    return 0;
}
