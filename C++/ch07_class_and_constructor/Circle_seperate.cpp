#include <iostream>
#include "Circle_seperate.h"
using namespace std;

// Circle member function 정의
Circle::Circle()
{
    radius = 0.0;
    cout << "constructor w/o parameter" << endl;
}
Circle::Circle(double rds)
{
    if (rds >= 0)
    {
        radius = rds;
        cout << "constructor with parameter" << endl;
    }
    else
    {
        cout << "반지름은 0이상이어야합니다." << endl;
        // assert(false);
        radius = 0.0;
    }
}

Circle::Circle(const Circle &c)
{
    radius = c.radius;
    cout << "copy constructor" << endl;
}
Circle::~Circle()
{
    cout << "deconstructor" << endl;
}
double Circle::getRadius()
{
    return radius;
}
void Circle::setRaduis(double rds)
{
    radius = rds;
}
double Circle::Circle::getArea()
{
    return (3.14 * radius * radius);
}
double Circle::getPerimeter()
{
    return (3.14 * 2 * radius);
}