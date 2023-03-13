#include <stdio.h>

int sum;

int save(int amount);
int draw(int amount);

int main()
{
    int money, order;

    while (1)
    {
        printf("저축을 원하시면 1번, 예금 인출을 원하시면 2번을 입력해 주세요.(종료는 -1): ");
        scanf("%d", &order);
        if (order == 1)
        {
            printf("얼마를 저축하시겠습니까?(종료는 -1): ");
            scanf("%d", &money);
            if (money == -1)
                continue;
            save(money);
        }
        else if (order == 2)
        {
            printf("얼마를 예금 인출하시겠습니까?(종료는 -1): ");
            scanf("%d", &money);
            if (money == -1)
                continue;
            draw(money);
        }
        else
            break;
    }

    return 0;
}

int save(int amount)
{
    sum += amount;
    printf("지금까지의 저축액은 %d입니다.\n", sum);

    return 0;
}

int draw(int amount)
{
    sum -= amount;
    printf("지금까지의 저축액은 %d입니다.\n", sum);

    return 0;
}