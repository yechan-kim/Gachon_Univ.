#include <stdio.h>

int main()
{
    int i;
    for (i = 60; i >= 0; i--)
    {
        printf("%d ", i);
        if (i == 0)
        {
            printf("\n");
            printf("발사\n");
        }
    }
    return 0;
}