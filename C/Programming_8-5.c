#include <stdio.h>
#define MAX 100

void prime(int n);

int main()
{
    for (int i = 2; i <= MAX; i++)
        prime(i);

    return 0;
}

void prime(int n)
{
    int j, cnt = 0;
    for (j = 2; j < n; j++)
    {
        if (n % j == 0)
            return;
    }
    printf("%d ", n);
}