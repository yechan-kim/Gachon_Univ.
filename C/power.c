#include <stdio.h>
#include "power.h"

int main()
{
    int x, y;
    double result;

    printf("x의 값을 입력하시오: ");
    scanf("%d", &x);
    printf("y의 값을 입력하시오: ");
    scanf("%d", &y);

    result = power(x, y);

    printf("%d의 %d제곱은 %f", x, y, result);

    return 0;
}

double power(int x, int y)
{
    double result = 1.0;

    for (int i = 0; i < y; i++)
        result *= x;

    return result;
}