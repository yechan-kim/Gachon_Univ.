#include <stdio.h>

int main()
{
    char menu;
    int seat[10] = {0}, i, a;

    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        scanf("%c", &menu);
        if (menu == 'y')
        {
            printf("\n");
            printf("------------------------------\n");
            for (i = 1; i <= 10; i++)
                printf("%3d", i);
            printf("\n");
            printf("------------------------------\n");
            for (i = 0; i < 10; i++)
                printf("%3d", seat[i]);
            printf("\n");
            printf("몇번째 좌석을 에약하시겠습니까 ");
            scanf("%d", &a);
            if (seat[a - 1] == 1)
                printf("이미 예약된 자리입니다. 다른 자리를 예약해주세요.\n");
            else
            {
                seat[a - 1] = 1;
                printf("예약되었습니다.\n");
            }
            scanf("%c", &menu); //"\n" 자동입력 방지
        }
        else
            break;
    }

    return 0;
}
