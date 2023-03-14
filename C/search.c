#include <stdio.h>
#define SIZE 10

int main()
{
    int i, search, list[SIZE];

    printf("[ ");
    for (i = 0; i < SIZE; i++)
    {
        list[i] = (i + 1) * 10;
        printf("%d ", list[i]);
    }
    printf("]\n");

    printf("탐색할 값을 입력하세요: ");
    scanf("%d", &search);
    for (i = 0; i < SIZE; i++)
    {
        if (list[i] == search)
        {
            printf("탐색 성공 인덱스 = %d", i);
            break;
        }
        else if (i == SIZE - 1)
            printf("탐색 실패");
    }

    return 0;
}