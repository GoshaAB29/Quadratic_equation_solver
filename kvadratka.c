#include "TXLib.h"
#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,D,ans1,ans2;
printf("��� ������������ �������� ����������� ���������. � ���� ������ ��������� ���� Ax^2+Bx+C=0. �������, ����������, ��� ������������: ");
scanf("%f%f%f",&a,&b,&c);
if (a==0)
{
    if (b==0)
    {
        if (c==0) { printf("��������� ����� ������������� �������\n"); }
        else
        { printf("��������� �� ����� ������\n"); }
    }
    else
    {
        ans1=-c/b;
        printf ("��������� ����� ������������ ������: x=%f\n", ans1);
    }
}
else
{
    D=b*b-4*a*c;
    if (D>=0)
        {
            ans1=(-b+sqrt(D))/2/a;
            ans2=(-b-sqrt(D))/2/a;
            if (ans1==ans2) { printf ("��������� ����� ������������ ������: x=%f", ans1);}
            else { printf ("��������� ����� 2 �����: %f � %f", ans1, ans2); }
        }
    else { printf("��������� �� ����� ������"); }
}
return 0;
}
