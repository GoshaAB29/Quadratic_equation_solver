void zero_ans ()
{
    printf ("Уравнение не имеет корней\n");
}

int kolvo_ans (float D)
{
    if (D > 0) return 2;
    if (D == 0) return 1;
    if (D < 0) return 0;
}
