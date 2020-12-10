#include <stdio.h>

int main(void)
{

    char password[30];

    while (1)
    {
        printf("암호를 생성하시오: ");
        scanf("%s", password);

        int i, cnt1 = 0, cnt2 = 0, cnt3 = 0;

        for (i = 0; password[i] != NULL; i++)
        {
            if ('a' <= password[i] && 'z' >= password[i])
                cnt1++;
            else if ('A' <= password[i] && 'Z' >= password[i])
                cnt2++;
            else if ('0' <= password[i] && '9' >= password[i])
                cnt3++;
        }

        if (cnt1 > 0 && cnt2 > 0 && cnt3 > 0)
            break;

        else
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
    }

    printf("적정한 암호입니다.");

    return 0;
}