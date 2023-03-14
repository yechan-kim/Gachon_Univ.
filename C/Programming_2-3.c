#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("정수를 입력하새요: ");
    scanf("%d", &num1);
    printf("정수를 입력하새요: ");
    scanf("%d", &num2);
    printf("정수를 입력하새요: ");
    scanf("%d", &num3);
    printf("평균은 %d입니다.", ((num1 + num2 + num3) / 3));
    return 0;
}