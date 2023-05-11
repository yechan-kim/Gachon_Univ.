#include <iostream>
#include <cassert> // assert를 사용하기 위한 헤더파일
using namespace std;
// class 정의, member data와 member 변수 선언.
class Circle
{
private:
    double radius; // radius == 전역변수
    char name[100];

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
// application or client
int main()
{                                                         // meber's selection operator => . => 조건 . 앞에가 객체이어야한다. (포인터일 경우 ->)
    Circle c1;                                            // constructor w/o parameter -> stack
    cout << "sizeof(c1): " << sizeof(c1) << endl;         // == 112 == 8(double circle) + 4(padding) + 100(char name[100])
    cout << "sizeof(Circle): " << sizeof(Circle) << endl; // == sizeof(c1)
    // 객체 포인터로 멤버 접근
    Circle donut;
    Circle pizza(30);
    Circle *p;
    p = &donut;
    p->setRaduis(3.5);
    // p를 이용해서 donut 객체의 면적을 계산하기 (1)
    cout << "donut 면적: " << p->getArea() << endl;
    // p를 이용해서 donut 객체의 면적을 계산하기 (2)
    cout << "donut 면적: " << (*p).getArea() << endl;
    // 1. 정적 객체 배열
    Circle A[3] = {Circle(5), Circle(20), Circle(30)};
    p = A; // p == &A[0] => A는 상수, p는 변수
    cout << "A: " << A << endl;
    cout << "&A[0]: " << &A[0] << endl;
    cout << "p: " << p << endl;
    cout << "p+1: " << p + 1 << endl; // p자체의 값이 변한것은 아님
    cout << "++p: " << ++p << endl;   // 실질적으로 p의 값이 sizeof(Circle)만큼 증가
    // p 값을 이용하여 정적 객체 배열에 소속된 객체의 면적을 구하기 (p값 변경 x)
    p = A;
    cout << "p: " << p << endl;
    for (int i = 0; i < 3; i++)
        cout << "Circle [" << i << "]의 면적: " << (p + i)->getArea() << endl;
    cout << "p: " << p << endl;
    // p 값을 이용하여 정적 객체 배열에 소속된 객체의 면적을 구하기 (p값 변경 o)
    for (int i = 0; i < 3; i++)
    {
        cout << "Circle [" << i << "]의 면적: " << p->getArea() << endl;
        p++;
    }
    cout << "p: " << p << endl;
    // 2. 동적 객체 배열
    cout << "생성하고자 하는 원의 개수는?: ";
    int num;
    cin >> num;
    Circle *B = new Circle[num];
    // 사용자에게 각 Circle 갹채의 반지름을 물어서 저장
    // 면적이 100~200사이인 Circle 갹체의 개수를 출력
    return 0;
}