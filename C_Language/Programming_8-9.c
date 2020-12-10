#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order;
    while (1)
    {
        printf("앞(0) 또는 뒤(1)를 선택하시요(종료는 -1): ");
        scanf("%d", &order);
        if (order == -1)
            break;
        if (rand() % 2 == order)
            printf("사용자가 이겼습니다.\n");
        else
            printf("컴퓨터가 이겼습니다.\n");
    }

    return 0;
}