#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;

void B::B1()
{
    cout << "in B1()" << endl;
}
void B::B2()
{
    cout << "in B2()" << endl;
    A::A2();
    B::B1();
}
B::B()
{
    cout << "생성자 호출" << endl;
}
B::~B()
{
    cout << "소멸자 호출" << endl;
}