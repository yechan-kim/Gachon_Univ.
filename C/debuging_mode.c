#include <stdio.h>
#define DEBUG
#define PI 3.1415
#define CIRCLE_AREA(r) ((r) * (r)*PI)

int main()
{
    double radius, area;

#ifdef DEBUG
    printf("디버깅 보드입니다.\n");
#endif

    printf("원의 반지름: ");
    scanf("%lf", &radius);
    area = CIRCLE_AREA(radius);
    printf("원의 면적 = %.2f", area);

    return 0;
}