#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double *xplus, double *xminus);

int main()
{

    int a = 1, b = 4, c = 3;
    double x1 = 0, x2 = 0;

    quadratic(a, b, c, &x1, &x2);
    printf("첫번째 실근: %lf\n두번째 실근: %lf", x1, x2);

    return 0;
}

void quadratic(int a, int b, int c, double *xplus, double *xminus)
{
    *xminus = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    *xplus = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}