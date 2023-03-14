#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    printf("정수를 입력하시오: ");
    scanf("%d", &y);
    printf("두수의 합은 %d입니다.\n", x + y);
    printf("두수의 차는 %d입니다.\n", abs(x - y));

    return 0;
}