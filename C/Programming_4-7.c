#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;

    printf("첫번째 점 (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("두번째 점 (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("distance= %lf", (double)sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));

    return 0;
}