#include <iostream>

using namespace std;

int main()
{
    // 참조 관계 생성
    int score = 92;
    int& rScore = score;

    cout << "addr of score:  " << &score << endl;
    cout << "addr of rScore: " << &rScore << endl;

    // 데이터 변수를 사용해서 접급
    cout << "데이터 변수를 사용해서 값에 접근하기" << endl;
    cout << "score:  " << score << endl;

    // 참조 변수를 사용해서 접근
    cout << "참조 변수를 사용해서 값에 접근하기" << endl;
    cout << "rScore:  " << rScore << endl;

    int name = 5;
    const int& rName = name;
    cout << "addr of name:  " << &name << endl;
    cout << "addr of rName:  " << &rName << endl;

    name = 55; // ok
    // rName = 65; // error C3892: 'rName': const인 변수에 할당할 수 없습니다.

    return 0;
}