#include <stdio.h>

struct vector
{
    float x, y;
};

void get_vector_sum(struct vector *a, struct vector *b, struct vector *sum);

int main(void)
{
    struct vector a = {2.0, 3.0};
    struct vector b = {5.0, 6.0};
    struct vector sum;

    get_vector_sum(&a, &b, &sum);
    printf("벡터의 합은 (%.2f, %.2f)입니다.\n", sum.x, sum.y);

    return 0;
}

void get_vector_sum(struct vector *a, struct vector *b, struct vector *sum)
{

    sum->x = a->x + b->x;
    sum->y = a->y + b->y;
}