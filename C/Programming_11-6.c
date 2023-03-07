#include <stdio.h>

enum COM
{
    s,
    r,
    p
};

int main()
{
    enum COM com = 0;
    int user;
    printf("가위(0), 바위(1), 보(2)를 입력하세요 : ");
    scanf("%d", &user);
    if (com == user)
        printf("비겼습니다.\n");
    else if (com > (user + 1) % 3)
        printf("이겼습니다.\n");
    else
        printf("졌습니다.\n");
    return 0;
}