#include <stdio.h>

int main()
{
    int num, sum;
    double avg;
    FILE *fp = fopen("sample.txt", "w");

    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.");
        return 1;
    }

    printf("정수들의 개수: ");
    scanf("%d", &num);
    fprintf(fp, "정수들의 개수: %d\n", num);

    printf("정수들의 합계: ");
    scanf("%d", &sum);
    fprintf(fp, "정수들의 합계: %d\n", sum);

    printf("정수들의 평균: ");
    scanf("%lf", &avg);
    fprintf(fp, "정수들의 평균: %lf\n", avg);

    fclose(fp);

    return 0;
}