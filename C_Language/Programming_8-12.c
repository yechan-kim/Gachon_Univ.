#include <stdio.h>

void show_digit(int x);

int main()
{
    int x;
    printf("정수를 입력하세요: ");
    scanf("%d", &x);
    show_digit(x);

    return 0;
}

void show_digit(int x)
{
    if (x > 0)
    {
        show_digit(x / 10);
        printf("%d ", x % 10);
    }

    return;
}