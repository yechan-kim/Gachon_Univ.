#include <stdio.h>

int main()
{
    int i;

    printf("====================\n");
    printf("화씨온도    섭씨온도\n");
    printf("====================\n");
    for (i = 0; i <= 100; i += 10)
    {
        printf("%7d %11d\n", i, (int)((i - 32) * (5.0 / 9.0)));
    }

    return 0;
}