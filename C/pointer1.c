#include <stdio.h>

int main(void)
{
    int i = 3000;
    int *p;
    p = &i;

    printf("i = %d\n", i);
    printf("&i = %u\n", &i);

    printf("p = %u\n", p);
    printf("*p = %d\n", *p);
    return 0;
}