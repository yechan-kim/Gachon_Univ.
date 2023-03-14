#include <stdio.h>
#include <math.h>

double dist_2d(int x1, int y1, int x2, int y2);

int main()
{
    int x1, y1, x2, y2;
    printf("첫번째 점의 좌표를 입력하시오:(x,y)");
    scanf("%d %d", &x1, &y1);
    printf("두번째 점의 좌표를 입력하시오:(x,y)");
    scanf("%d %d", &x2, &y2);
    printf("두점 사이의 거리는 %.6lf입니다.", dist_2d(x1, y1, x2, y2));

    return 0;
}

double dist_2d(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}