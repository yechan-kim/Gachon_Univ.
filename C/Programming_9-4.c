#include <stdio.h>

void get(double value, int *i_part, double *f_part);

int main()
{
    int n;
    double f;
    get(3.14, &n, &f);
    printf("정수부: %d \n소수부: %.6f\n", n, f);

    return 0;
}

void get(double value, int *i_part, double *f_part)
{
    *i_part = (int)value;
    *f_part = value - (int)value;
}