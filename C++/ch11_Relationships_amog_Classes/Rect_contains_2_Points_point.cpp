#include <iostream>
#include "Rect_contains_2_Points_point.h"

using namespace std;

Point::Point()
{
    x = 0;
    y = 0;
    cout << "Point 매개변수 없는 생성자 호출" << endl;
}
Point::Point(int initialX, int initialY)
{
    x = initialX;
    y = initialY;
    cout << "Point 매개변수 있는 생성자 호출" << endl;
}
Point::Point(const Point &pt)
{
    x = pt.x;
    y = pt.y;
    cout << "Point 복사 생성자 호출" << endl;
}
Point::~Point()
{
    cout << "Point 소멸자 호출" << endl;
}
void Point::SetX(int value)
{
    x = value;
}
void Point::SetY(int value)
{
    y = value;
}
int Point::GetX() const
{
    return x;
}
int Point::GetY() const
{
    return y;
}
void Point::Print() const
{
    cout << "(" << x << ", " << y << ")" << endl;
}