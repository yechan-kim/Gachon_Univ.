#include <iostream>

using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
    void setRadius(int r);
};

Circle::Circle()
{
    radius = 1;
    cout << "인자없는 생성자" << endl;
}

Circle::Circle(int r)
{
    radius = r;
    cout << "인자있는 생성자" << endl;
}

Circle::~Circle()
{
    cout << "소멸자" << endl;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

void Circle::setRadius(int r)
{
    radius = r;
}

int main()
{
    Circle donut;
    Circle pizza(30);

    // 객체 포인터로 멤버 접근
    cout << donut.getArea() << endl;

    // 객체 포인터로 멤버 접근
    Circle *p;
    p = &donut;
    cout << p->getArea() << endl; // donut의 getAtea() 호출 == (*p).getArea()

    p = &pizza;
    cout << p->getArea() << endl; // pizza의 getAtea() 호출 == (*p).getArea()

    Circle circleArray[3];                            // Circle 객체 배열 생성
    Circle A[3] = {Circle(10), Circle(20), Circle()}; // Circle 배열 초기화

    // 배열의 각 원소 객체의 멤버 접근
    circleArray[0].setRadius(10); // == circleArray->setRadius(10); == (*circleArray).setRadius(10);
    circleArray[1].setRadius(20); // == (circleArray + 1)->setRadius(20); == (*(circleArray + 1))->setRadius(20);
    circleArray[2].setRadius(30); // == (circleArray + 2)->setRadius(30); == (*(circleArray + 2))->setRadius(30);

    for (int i = 0; i < 3; i++) // 배열의 각 원소 객체의 멤버 접근
        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

    // Circle *p;
    p = circleArray;
    for (int i = 0; i < 3; i++) // 객체 포인터로 배열 접근
    {
        cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
        p++;
    }

    return 0;
}