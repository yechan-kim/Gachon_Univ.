#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char cs[] = "Are you string too?";
    string cpps;

    cpps = cs;
    cout << "cs: " << cs << endl;
    cout << "cpps: " << cpps << endl;

    cpps[0] = 'B';
    cout << "cpps: " << cpps << endl;

    // string 객체에서 c style문자열 얻기
    string cpps2 = "Yes, I am.";
    const char *cs2 = NULL;
    cs2 = cpps2.c_str(); // 문자열의 주소를 반환한다. 오직 일기 용도로만 사용
    cout << cs2 << endl;

    int len = cpps2.size();             // 10
    char *cs3 = new char[len + 1];      // 복사를 할 char배열 준비
    strcpy(cs3, len + 1, cpps.c_str()); // 복사, 사용하기 위해서는 #include <cstring> 필요 -> visual studio에서는 #include <string>에 포함되어 있다. (strcpy_s 사용)
    cout << cs3 << endl;
    cs3[0] = 'Z'; // 수정가능
    cout << cs3 << endl;
    delete[] cs3;

    return 0;
}