#include <stdio.h>

int main ()
{
    printf("char형의 크기는 %ld바이트입니다.\n", sizeof(char));
    printf("short형의 크기는 %ld바이트입니다.\n", sizeof(short));
    printf("int형의 크기는 %ld바이트입니다.\n", sizeof(int));
    printf("long형의 크기는 %ld바이트입니다.\n", sizeof(long));
    printf("long long형의 크기는 %ld바이트입니다.\n", sizeof(long long));
    printf("float형의 크기는 %ld바이트입니다.\n", sizeof(float));
    printf("double형의 크기는 %ld바이트입니다.\n", sizeof(double));
    printf("long double형의 크기는 %ld바이트입니다.\n", sizeof(long double));

    return 0;
}