#include <stdio.h>

int main()
{
    int num1, num2;
    printf("첫 번째 숫자를 입력하시오: ");
    scanf("%d", &num1);
    printf("두 번째 숫자를 입력하시오: ");
    scanf("%d", &num2);
    printf("두 수의 합: %d\n", num1 + num2);
    printf("두 수의 치: %d\n", num1 - num2);
    printf("두 수의 곱: %d\n", num1 * num2);
    printf("두 수의 몫: %d\n", num1 / num2);

    return 0;
}