#include <stdio.h>

int main()
{
    int x, sum = 0;
    while (x != 0)
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &x);
        sum += x;
    }
    printf("합계=%d\n", sum);

    return 0;
}