#include <stdio.h>

int main(void)
{
    int x = 0, next_x = 0;

    next_x = ++x;
    printf("next_x =%2d, x =%2d\n", next_x, x);

    x = 0;
    next_x = x++;
    printf("next_x =%2d, x =%2d\n", next_x, x);

    x = 0;
    next_x = --x;
    printf("next_x =%2d, x =%2d\n", next_x, x);

    x = 0;
    next_x = x--;
    printf("next_x =%2d, x =%2d\n", next_x, x);

    return 0;
}