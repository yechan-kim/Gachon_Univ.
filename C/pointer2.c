#include <stdio.h>

int main()
{
    int *p, number = 10;

    p = &number;
    printf("변수 number의 값 = %d\n", number);

    *p = 20;
    printf("변수 number의 값 = %d\n", number);

    return 0;
}