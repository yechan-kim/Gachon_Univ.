#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p, max = 0.0;
    int i, items;

    printf("요소의 개수: ");
    scanf("%d", &items);
    p = (float *)malloc(sizeof(float) * items);

    for (i = 0; i < items; i++)
    {
        printf("요소 %d: ", i + 1);
        scanf("%f", &p[i]);
        if (max < p[i])
            max = p[i];
    }

    printf("최대값 = %f", max);

    free(p);

    return 0;
}