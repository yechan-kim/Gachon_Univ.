#include <stdio.h>

int counter;

void set_counter(int i)
{
    counter = i;
}

int main(void)
{
    printf("counter=%d\n", counter);

    counter = 100;
    printf("counter=%d\n", counter);

    set_counter(20);
    printf("counter=%d\n", counter);

    return 0;
}