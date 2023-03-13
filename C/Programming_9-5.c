#include <stdio.h>

void brighten_image(char *p, int n);

int main()
{
    char image[100] =
        {
            0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
            0, 0, 0, 9, 9, 0, 0, 0, 0, 0,
            0, 0, 9, 0, 9, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 8, 0, 0, 6, 0, 0,
            0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
            0, 0, 6, 6, 9, 7, 7, 0, 0, 0};

    brighten_image(image, 100);

    for (int i = 0; i < 100; i++)
    {
        printf("%d", image[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    return 0;
}

void brighten_image(char *p, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (p[i] < 10 && p[i] > 0)
            p[i] -= 1;
    }
}