#include <stdio.h>

struct email
{
    char title[30], recipient[20], sender[20], content[100];
    int date, rank;
};

int main()
{
    struct email mail = {
        "test",
        "tisckd@gachon.ac.kr",
        "test@gachon.ac.kr",
        "test메일_입니다.",
        20201126,
        1};

    printf("제목: %s\n발신자: %s\n수신자: %s\n내용: %s\n날짜: %d\n순위: %d",
           mail.title, mail.recipient, mail.sender, mail.content, mail.date, mail.rank);

    return 0;
}