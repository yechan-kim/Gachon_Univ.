#include <iostream>
using namespace std;

//함수 선언
int addMul(int a, int b, int &rA, int &rB);

int main()
{
    //변수 선언
    int a, b, add, mul;

    //두 개의 정수 입력
    cout << "두 개의 정수(a, b)를 입력하세요: ";
    cin >> a >> b;

    //함수 실행
    addMul(a, b, add, mul);

    //결과 출력
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << add << endl;
    cout << "a * b = " << mul << endl;

    return 0;
}

//함수 정의
int addMul(int a, int b, int& rA, int& rB)
{
    //입력받은 변수의 합과 곲을 계산(return-by-reference)
    rA = a + b;
    rB = a * b;

    return 0;
}