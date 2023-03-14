#include <stdio.h>
#define STUDENTS 5

int main()
{
    int i, average, score[STUDENTS], sum = 0;

    for (i = 0; i < STUDENTS; i++)
    {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &score[i]);
        sum += score[i];
    }

    average = sum / STUDENTS;
    printf("성적 평균 = %d\n", average);

    return 0;
}