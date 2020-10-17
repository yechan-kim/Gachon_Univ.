#include <stdio.h>

double f(double x, double y);

int main()
{
    printf("x=1.0, y=1.0, f(x,y)=%.6lf\n", f(1.0, 1.0));
    printf("x=2.0, y=1.0, f(x,y)=%.6lf\n", f(2.0, 1.0));
    printf("x=1.0, y=2.0, f(x,y)=%.6lf\n", f(1.0, 2.0));
    return 0;
}

double f(double x, double y)
{
    return (1.5 * x + 3.0 * y);
}