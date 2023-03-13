#include <stdio.h>

float power(float c, float d)
{
    float i, j;
    j = c;

    for (i = 0; i < d - 1; i++)
        j *= c;

    return j;
}

int main()
{
    float x;
    printf("x의 값을 입력하시오: ");
    scanf("%f", &x);
    printf("다항식의 값은 %.5f입니다.", (3 * power(x, 3) - 9 * power(x, 2) + 9));

    return 0;
}