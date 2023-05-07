#include <iostream> // system lib
#include <cassert>  // assert를 사용하기 위한 헤더파일
#include "Circle_seperate.h" // local lib
using namespace std;

// application or client
int main()
{              // meber's selection operator => . => 조건 . 앞에가 객체이어야한다. (포인터일 경우 ->)
    Circle c1; // constructor w/o parameter -> stack
    // cout << c1.radius << endl; // 멤버 "Circle::radius"에 액세스할 수 없습니다.
    cout << c1.getRadius() << endl;
    Circle c2(3.8); // constructor with parameter
    cout << c2.getRadius() << endl;
    cout << c2.getPerimeter() << endl;
    cout << c2.getArea() << endl;
    Circle c3(c2); // copy constructor
    cout << c3.getRadius() << endl;
    cout << c3.getPerimeter() << endl;
    cout << c3.getArea() << endl;
    Circle c4(-6.8);               // assert(false)
    Circle *c5p = new Circle(5.2); // delete를 하지 않을 경우 소멸자가 호출이 안됨 => memory leaking
    cout << c5p->getRadius() << endl;
    cout << (*c5p).getPerimeter() << endl; // dereferencing(*) + member selection op(.)
    cout << c5p->getArea() << endl;
    delete c5p;
    c5p = NULL;
    return 0;
}