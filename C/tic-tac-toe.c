#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
    int i, j, k, x, y, cnt[ROWS][COLS] = {0};
    char board[ROWS][COLS] = {' '};

    for (i = 0; i < ROWS * COLS; i++)
    {
        printf("(x, y) 좌표: ");
        scanf("%d %d", &x, &y);

        if (cnt[x][y] == 0)
        {
            board[x][y] = (i % 2 == 0) ? 'X' : 'O';
            cnt[x][y]++;

            for (j = 0; j < ROWS; j++)
            {
                printf("---|---|---\n");
                printf(" %c | %c | %c\n", board[j][0], board[j][1], board[j][2]);
            }
            printf("---|---|---\n");
        }

        else
        {
            printf("중복되는 좌표입니다. 다른 좌표를 입력해 주세요");
            i--;
        }
    }
    return 0;
}