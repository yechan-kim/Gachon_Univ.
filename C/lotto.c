#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
        printf("%d ", 1 + (rand() % MAX));

    return 0;
}