#include <stdio.h>

int get_integer();
int power(int x, int y);

int main()
{
    int x = get_integer(), y = get_integer();

    printf("%d의 %d승 = %d", x, y, power(x, y));

    return 0;
}

int get_integer()
{
    int value;
    printf("정수를 입력하세요: ");
    scanf("%d", &value);
    return value;
}

int power(int x, int y)
{
    int i, value = 1;
    for (i = 0; i < y; i++)
        value *= x;

    return value;
}