#include <stdio.h>

int main()
{
    int x;
    
    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &x);
    printf("세제곱값은 %d*%d*%d = %d입니다.", x, x, x, x * x * x);

    return 0;
}