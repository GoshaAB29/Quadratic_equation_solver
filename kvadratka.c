#include "TXLib.h"
#include <stdio.h>
#include <math.h>

void zero_ans ()
{
    printf ("Уравнение не имеет корней\n");
}

int main ()
{
    float a = 0, b = 0, c = 0, D = 0, ans1 = 0, ans2 = 0;

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
            printf ("Уравнение имеет единственный корень: x=%f\n", ans1);
        }
    } else {
        D = b * b - 4 * a * c;
        if (D >= 0) {
            ans1 = (-b + sqrt(D)) / 2 / a;
            ans2 = (-b - sqrt(D)) / 2 / a;
            if (ans1 == ans2) {
                printf ("Уравнение имеет единственный корень: x=%f", ans1);
            } else {
                printf ("Уравнение имеет 2 корня: %f и %f", ans1, ans2);
            }
        } else {
            zero_ans ();
        }
    }

    return 0;
}
