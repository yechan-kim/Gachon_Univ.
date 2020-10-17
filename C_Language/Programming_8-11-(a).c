#include <stdio.h>

int save(int amount);

int sum;

int main()
{
    int money;

    while (1)
    {
        printf("얼마를 저축하시겠습니까?(종료는 -1): ");
        scanf("%d", &money);
        if (money == -1)
            break;
        save(money);
    }

    return 0;
}

int save(int amount)
{
    sum += amount;
    printf("지금까지의 저축액은 %d입니다.\n", sum);

    return 0;
}