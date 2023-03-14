#include <stdio.h>
#define SIZE 16

int sum(int *arr);

int main()
{
    int i, att_book[SIZE];
    double rate;

    for (i = 0; i < SIZE; i++)
    {
        printf("%d번째 강의에 출석하셨나요? (출석은 1, 결석은 0): ", i + 1);
        scanf("%d", &att_book[i]);
    }

    rate = (sum(att_book) / 16.0) * 100;

    if (rate < 70)
        printf("수업 일수 부족입니다. (출석률: %.2f%%)", rate);
    else
        printf("출석률: %.2f%%", rate);

    return 0;
}

int sum(int *arr)
{
    int i, result = 0;
    for (i = 0; i < SIZE; i++)
        result += arr[i];
    return result;
}