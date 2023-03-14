#include <stdio.h>
#include <stdlib.h>


int main()
{
    int cash = 50, tar = 250, bets = 0, cnt = 0;

    printf("초기 금액 $50\n");
    printf("목표 금액 $250\n");

    while (cash != 0)
    {
        if ((double)rand() / RAND_MAX < 0.5)
        {
            cash++;
            cnt++;
        }
        else
            cash--;

        bets++;

        if (cash == tar)
            break;
    }

    printf("%d 중의 %d번 승리\n", bets, cnt);
    printf("이긴 확률=%lf\n", (double)cnt / bets * 100);

    return 0;
}