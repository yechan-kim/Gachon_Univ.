#include <iostream>
#include "programming_01.h"

using namespace std;

int One::getX() const
{
    return x;
}

int One::getY() const
{
    return y;
}

One::One(int X, int Y)
{
    x = X;
    y = Y;
    cout << "매개변수가 있는 생성자가 호출되었습니다." << endl;
}

One::~One()
{
    cout << "소멸자가 호출되었습니다." << endl;
}