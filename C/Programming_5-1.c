#include <stdio.h>

int main()
{
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d은 짝수입니다.", num);
    else
        printf("%d은 홀수입니다.", num);

    return 0;
}