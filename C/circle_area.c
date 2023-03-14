#include <stdio.h>

int main(void)
{
    float radius = 0;
    printf("원의 반지름을 입력하시오.:");
    scanf("%f", &radius);
    printf("원의 면적: %f", 3.141592 * radius * radius);

    return 0;
}