#include <stdio.h>
#define SIZE 5

int main(void)
{
    int grade[SIZE], i, min;

    for (i = 0; i < SIZE; i++)
    {
        printf("성적을 입력하세요: ");
        scanf("%d", &grade[i]);
    }

    min = grade[0];

    for (i = 1; i < SIZE; i++)
    {
        if (grade[i] < min)
            min = grade[i];
    }

    printf("최소값은 %d입니다.\n", min);
    return 0;
}