#include <stdio.h>

int main(void)
{
    char s[] = "HelloWorld";
    char *p = "HelloWorld";

    s[0] = 'h';

    printf("배열 s에 저장되는 문자열 = %s\n", s);
    printf("포인터가 가리키는 문자열 = %s\n", p);

    p = "Goodbye";
    printf("포인터가 기리키는 문자열 = %s\n", p);
    return 0;
}