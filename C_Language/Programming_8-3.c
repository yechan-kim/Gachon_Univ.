#include <stdio.h>

void draw_stars (void);
int main()
{
    draw_stars ();
    printf("Hello World!\n");
    draw_stars ();

    return 0;
}

void draw_stars (void)
{
    printf("*****************\n");
}