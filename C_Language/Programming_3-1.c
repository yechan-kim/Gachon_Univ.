#include <stdio.h>

int main()
{
    float x;
    printf("실수를 입력하시오: ");
    scanf("%f", &x);
    printf("지수 형식으로는 %e입니다.", x);

    return 0;
}