#include <stdio.h>

int factorial(int n);

int main(void)
{
    int f, x = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    f = factorial(x);
    printf("%d!은 %d입니다.\n", x, f);

    return 0;
}

int factorial(int n)
{
    printf("factorial(%d)\n", n);

    if (n <= 1)
        return 1;
    else
        return (n * factorial(n - 1));
}