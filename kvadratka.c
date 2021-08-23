#include "TXLib.h"
#include <stdio.h>
#include <math.h>
#include "kvadratka_functions.c"

int main ()
{
    float a = 0, b = 0, c = 0, D = 0, ans1 = 0, ans2 = 0;
    int kolvoans = 0;

    printf ("Вас приветствует решатель квадратного уравнения. Я умею решать уравнения вида Ax^2+Bx+C=0. Введите, пожалуйста, эти коэффициенты: ");
    scanf ("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf ("Уравнение имеет бесконечность решений\n");
            } else {
                zero_ans ();
            }
        } else {
            ans1 = -c / b;
            printf ("Уравнение имеет единственный корень: x=%.3f\n", ans1);
        }
    } else {
        D = b * b - 4 * a * c;
        kolvoans=kolvo_ans (D);

        switch (kolvoans) {
            case 0:
                zero_ans ();
                break;
            case 1:
                ans1 = -b / 2 / a;
                printf ("Уравнение имеет единственный корень: x=%.3f\n", ans1);
                break;
            case 2:
                ans1 = (-b + sqrt(D)) / 2 / a;
                ans2 = (-b - sqrt(D)) / 2 / a;
                printf ("Уравнение имеет 2 корня: %.3f и %.3f\n", ans1, ans2);
                break;
        }
    }

    return 0;
}
