#include <stdio.h>

int main(void)
{
    int x = 10, y = 10, z = 33;

    x += 1;
    y *= 2;
    z %= x + y;

    printf("x = %d, y = %d, z = %d \n", x, y, z);
    return 0;
}