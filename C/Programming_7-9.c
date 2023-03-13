#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 10

int main()
{
    char tile[SIZE];
    int i, direction, tar = SIZE / 2;

    while (getch() != ' ')
    {
        for (i = 0; i < SIZE; i++)
        {
            if (i == tar)
                tile[i] = '*';
            else
                tile[i] = '_';
            printf("%c ", tile[i]);
        }

        printf("\n");

        direction = rand() % 2;
        if (direction == 0)
            tar--;
        else
            tar++;
        if (tar < 0)
            tar += 2;
        if (tar >= SIZE)
            tar -= 2;
    }

    return 0;
}