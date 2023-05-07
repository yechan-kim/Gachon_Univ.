#ifndef CIRCLE_SEPERATE_H
#define CIRCLE_SEPERATE_H
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
#endif