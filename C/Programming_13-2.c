#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p, sum = 0.0;
    int i, items;

    printf("요소의 개수: ");
    scanf("%d", &items);
    p = (float *)malloc(sizeof(float) * items);

    for (i = 0; i < items; i++)
    {
        printf("배열의 요소를 입력하시오: ");
        scanf("%f", &p[i]);
        sum += p[i];
    }

    printf("합 = %f", sum);

    free(p);

    return 0;
}