#include <stdio.h>

int main()
{
    float x;
    printf("x의 값을 입력하시오: ");
    scanf("%f", &x);
    printf("다항식의 값은 %.6f입니다.", (x + 76.587));

    return 0;
}