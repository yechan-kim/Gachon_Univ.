#include <iostream>
#include "A.h"
#include "C.h"
using namespace std;

void C::C1()
{
    cout << "in C1()" << endl;
    A::A1();
    A::A2();
}
C::C()
{
    cout << "생성자 호출" << endl;
}
C::~C()
{
    cout << "소멸자 호출" << endl;
}