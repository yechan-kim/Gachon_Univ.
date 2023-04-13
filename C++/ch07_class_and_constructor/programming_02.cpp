#include "programming_02.h"

int Two::getX() const
{
    return x;
}
char Two::getA() const
{
    return a;
}
void Two::setX(int value)
{
    x = value;
}
void Two::setA(char value)
{
    a = value;
}
Two::Two(int value1, char value2)
    : x(value1), a(value2)
{
    cout << "매개변수가 있는 생성자가 호출 되었습니다." << endl;
}

Two::~Two()
{
    cout << "소멸자가 호출 되었습니다." << endl;
}
