#include <stdio.h>

int get_max(int x, int y);

int main(void)
{
    int a, b;

    printf("두개의 정수를 입력하시오.: ");
    scanf("%d %d", &a, &b);

    printf("두 수 중에서 큰 수는 %d입니다.\n", get_max(a, b));

    return 0;
}

int get_max(int x, int y)
{
    printf("x= %d, y = %d\n", x, y);
    if (x > y)
        return x;
    else
        return y;
}