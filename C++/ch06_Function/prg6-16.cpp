#include <iostream>

using namespace std;

// 함수 선언
bool isEven(int) y;

int main()
{
    cout << boolalpha << isEven(5) << endl; // boolalpha는 modulator로 true, false로 출력하게함.
    cout << isEven(10) << endl;

    return 0;
}

//함수 정의
bool isEven(int y)
    return y % 2 == 0;