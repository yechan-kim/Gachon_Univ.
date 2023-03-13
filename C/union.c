#include <stdio.h>

union example
{
    int i;
    char c;
};

int main()
{
    union example data;

    data.c = 'A';
    printf("data.c: %c data.i: %i", data.c, data.i);
    data.i = 10000;
    printf("\ndata.c: %c data.i: %i", data.c, data.i);

    return 0;
}