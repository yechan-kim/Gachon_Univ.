#include <stdio.h>

void get_divisor(int n);

int main()
{

    int num;

    printf("약수를 찾을 정수 입력: ");
    scanf("%d", &num);

    get_divisor(num);

    return 0;
}

void get_divisor(int n)
{

    int i;

    printf("%d의 약수 = ", n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
}