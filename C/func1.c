#include <stdio.h>

int get_integer();

int main()
{
    int x = get_integer(), y = get_integer();

    printf("두 수의 합 = %d", x + y);

    return 0;
}

int get_integer()
{
    int value;
    printf("정수를 입력하세요: ");
    scanf("%d", &value);
    return value;
}