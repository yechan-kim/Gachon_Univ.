#include <iostream>
using namespace std;
char *ShiftLeftString(char *msg, int len)
{
    // 결과 문자열을 보관할 공간을 할당한다.
    char *copy_msg = new char[len + 1];
    // 원본 문자열의 첫번째 글자를 빼고 복사한다.
    for (int i = 0; i < len - 1; ++i)
    {
        copy_msg[i] = msg[i + 1];
    }
    // 원본 문자열의 첫번째 글자를 제일 뒤에 복사한다.
    copy_msg[len - 1] = msg[0];
    copy_msg[len] = NULL;
    return copy_msg;
}
int main()
{
    char message[] = "BINGO JJANG!!!";
    cout << message << endl;
    cout << "sizeof(message): " << sizeof(message) << endl; // 15
    cout << "strlen(message): " << strlen(message) << endl; // 14
    int len = strlen(message);
    // char orig[15];
    char *orig = new char[len + 1];
    cout << "sizeof(orig) : " << sizeof(orig) << endl;

    strcpy_s(orig, len + 1, message);

    cout << message << endl;
    char *copy;
    for (int i = 0; i < sizeof(message) - 1; i++)
    {
        copy = ShiftLeftString(orig, 14);
        cout << copy << endl;
        strcpy_s(orig, len + 1, copy);
        delete[] copy;
        copy = NULL;
    }
    delete[] orig;
    orig = NULL;
    return 0;
}
/*
BINGO JJANG!!!
INGO JJANG!!!B
NGO JJANG!!!BI
GO JJANG!!!BIN
O JJANG!!!BING
 JJANG!!!BINGO
JJANG!!!BINGO
JANG!!!BINGO J
ANG!!!BINGO JJ
NG!!!BINGO JJA
G!!!BINGO JJAN
!!!BINGO JJANG
!!BINGO JJANG!
!BINGO JJANG!!
BINGO JJANG!!!
계속하려면 아무 키나 누르십시오 . . .
*/