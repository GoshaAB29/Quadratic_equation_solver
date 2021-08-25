void zero_ans ()
{
    printf ("Equation hasn't roots\n");
}

void solve_linear (double b, double c, double *ans1)                        // �������� ������ ����������� ���������
{
    *ans1 = -b / c;
}

int solve_square (double D, double a, double b, double c, double *ans1, double *ans2) // ������ ���������� ��������� (� != 0, b != 0, c != 0), return - ���������� ������
{
    if (D > 0.0) {
        *ans1 = (-b + sqrt(D)) / 2 / a;
        *ans2 = (-b / a) - *ans1;
        return 2;
    } else {                           //  ���� D <= 0
        if (D == 0.0) {
            *ans1 = *ans2 = -b / 2 / a;
            return 1;
        } else {                       // ���� D < 0
            return 0;
        }
    }
}
