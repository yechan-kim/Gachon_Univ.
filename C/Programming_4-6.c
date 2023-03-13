#include <stdio.h>

int main()
{
    float x, y;

    printf("2개의 실수를 입력하시오: ");
    scanf("%f %f", &x, &y);
    printf("합의 정수부 = %d", (int)x + (int)y);

    return 0;
}