#include <stdio.h>

int main()
{
    char name[100], address[100];

    printf("이름이 어떻게 되시나요? ");
    gets_s(name,100);

    printf("어디 사니나요? ");
    gets_s(address,100);

    printf("안녕하세요 %s에 사는 %s씨.", address, name);

    return 0;
}