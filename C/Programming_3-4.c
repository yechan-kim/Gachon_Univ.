#include <stdio.h>

int main()
{
    float x;
    printf("면적을 제곱미터 단위로 입력하세요: ");
    scanf("%f", &x);
    printf("%.2f제곱미터는 %.2f평입니다.", x, (x / 3.3058));

    return 0;
}