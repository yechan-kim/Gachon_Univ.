#include <stdio.h>
#include <stdlib.h>

typedef struct rec
{
    int i;
    float PI;
    char A;
} my_record;

int main()
{
    my_record *p = (my_record *)malloc(sizeof(my_record));

    *p = {10, 3.14, 'a'};

    printf("%d\n%f\n%c", p->i, p->PI, p->A);

    free(p);

    return 0;
}