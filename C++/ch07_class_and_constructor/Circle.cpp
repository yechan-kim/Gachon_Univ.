#include <iostream>
#include <cassert> // assert를 사용하기 위한 헤더파일
using namespace std;
// class 정의, member data와 member 변수 선언.
class Circle
{
private:
    double radius; // radius == 전역변수
public:
    Circle();
    Circle(double rds); // rds == 지역변수
    Circle(const Circle &c);
    ~Circle();                  // 소멸자
    double getRadius();         // getter
    void setRaduis(double rds); // setter
    double getArea();
    double getPerimeter();
};
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
        cout << "반지름은 0이상이어야합니다. 프로그램 종료." << endl;
        assert(false);
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
// application or client
int main()
{
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
    Circle c4(-6.8); // assert(false)
    return 0;
}