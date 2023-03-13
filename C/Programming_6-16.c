#include <stdio.h>

int main()
{
    float u, f = 1000;
    while (f > 100)
    {
        printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
        scanf("%f", &u);
        f += u;
        printf("현재 남아있는 양은 %.6f입니다.\n", f);
    }
    printf("\n");
    printf("(경고) 연료가 10%이하 입니다.");
    
    return 0;
}