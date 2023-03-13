#include <stdio.h>

int main(void)
{
    char str[30] = "A barking dog never bites";
    int i = 0;

    while (str[i] != 0)
        i++;

    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
}