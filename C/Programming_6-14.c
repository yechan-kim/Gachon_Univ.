#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("n의 값을 입력하시오: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (i * i);
    }
    printf("계산값은 %d입니다.\n", sum);

    return 0;
}