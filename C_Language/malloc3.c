#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i, items;

    printf("항목의 개수는 몇개입니까? ");
    scanf("%d", &items);
    p = (int *)malloc(sizeof(int) * items);

    for (i = 0; i < items; i++)
    {
        printf("항목(정수)을 입력하시오: ");
        scanf("%d", &p[i]);
    }

    printf("\n입력된 값은 다음과 같습니다: \n");
    for (i = 0; i < items; i++)
        printf("%d ", p[i]);
    free(p);

    return 0;
}