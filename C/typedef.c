#include <stdio.h>

typedef struct point
{
    int x, y;
} POINT;

POINT translate(POINT p, POINT delta);

int main(void)
{
    POINT p = {2, 3}, delta = {10, 10}, result = translate(p, delta);

    printf("새로운 점의 좌표는(%d %d)입니다.\n", result.x, result.y);

    return 0;
}

POINT translate(POINT p, POINT delta)
{
    POINT new_p;

    new_p.x = p.x + delta.x;
    new_p.y = p.x + delta.y;

    return new_p;
}