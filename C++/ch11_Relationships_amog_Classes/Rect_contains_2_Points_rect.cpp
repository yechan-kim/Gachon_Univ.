#include <iostream>
#include "Rect_contains_2_Points_rect.h"
#include "Rect_contains_2_Points_point.h"

using namespace std;

Rect::Rect()
{
    topLeft.SetX(0);
    topLeft.SetY(0);
    bottomRight.SetX(0);
    bottomRight.SetY(0);
    cout << "Rect 매개변수 없는 생성자 호출" << endl;
}
Rect::Rect(const Point &TL, const Point &BR)
{
    topLeft = TL;
    bottomRight = BR;
    cout << "Rect 매개변수 있는 생성자 호출" << endl;
}
Rect::Rect(int a, int b, int c, int d)
{
    topLeft.SetX(a);
    topLeft.SetY(b);
    bottomRight.SetX(c);
    bottomRight.SetY(d);
    cout << "Rect 매개변수 있는 생성자 호출" << endl;
}
Rect::Rect(const Rect &r)
{
    topLeft = r.topLeft;
    bottomRight = r.bottomRight;
    cout << "Rect 복사 생성자 호출" << endl;
}
Rect::~Rect()
{
    cout << "Rect 소멸자 호출" << endl;
}
void Rect::Print() const
{
    cout << "좌상단: ";
    topLeft.Print();
    cout << "우하단: ";
    bottomRight.Print();
}