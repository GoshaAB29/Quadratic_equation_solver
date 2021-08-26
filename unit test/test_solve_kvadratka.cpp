#include <assert.h>
#include <stdio.h>
#include <math.h>
#include "kvadratka_functions.cpp"

 int main ()                                 // f(ans1, ans2, kolvo...)
{
    double ans1 = 0, ans2 = 0;
    int kolvoans = 0;

    kolvoans = solve_square (1, 2, 3, &ans1, &ans2);
    kolvoans == 0?
        printf ("Test 1 complete\n") : printf ("Test 1 failed\n");

    kolvoans = solve_square (1, 2, 1, &ans1, &ans2);
    ((kolvoans == 1) && (almost_0 (ans1+1)))?
        printf ("Test 2 complete\n") : printf ("Test 2 failed\n");

    kolvoans = solve_square (2, 7, 3, &ans1, &ans2);
    ((kolvoans == 2) && (almost_0 (ans1 + 0.5)) && (almost_0 (ans2 + 3)))?
        printf ("Test 3 complete\n") : printf ("Test 3 failed\n");

    return 0;
}
