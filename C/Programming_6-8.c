#include <stdio.h>

int main()
{
    int i, x, y, sum = 0;

    printf("시작정수: ");
    scanf("%d", &x);
    printf("종료정수: ");
    scanf("%d", &y);

    for (i = x; i <= y; i++)
    {
        sum += i;
    }
    printf("Sum of %d to %d = %d", x, y, sum);

    return 0;
}