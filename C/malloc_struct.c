#include <stdio.h>
#include <stdlib.h>

struct movie
{
    char title[100];
    double rating;
};

int main()
{
    int i, size;
    struct movie *mv;

    printf("영화의 개수: ");
    scanf("%d", &size);

    mv = (struct movie *)malloc(sizeof(struct movie) * size);

    for (i = 0; i < size; i++)
    {
        printf("영화 제목: ");
        scanf("%s", (mv + i)->title);
        printf("영화 평점: ");
        scanf("%lf", &(mv + i)->rating);
    }

    printf("\n====================\n");

    for (i = 0; i < size; i++)
    {
        printf("영화 제목: %s\n", (mv + i)->title);
        printf("영화 평점: %lf\n", (mv + i)->rating);
    }

    printf("====================");

    free(mv);

    return 0;
}