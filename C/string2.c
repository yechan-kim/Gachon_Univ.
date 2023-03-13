#include<stdio.h>

int main(void)
{
    char str[]="komputer";

    printf("%s\n",str);
    str[0]='c';
    printf("%s",str);

    return 0;
}