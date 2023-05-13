#include <iostream>

using namespace std;

// Circle 동적 객체배열
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
    // 정적객체배열
    Circle Array[3];

    Array[0].setRadius(10);
    Array[1].setRadius(20);
    Array[2].setRadius(30);

    for (int i = 0; i < 3; i++)
        cout << Array[i].getArea() << endl;

    Circle *p1 = Array; // 포인터 p에 배열의 주소값으로 설정
    for (int i = 0; i < 3; i++)
    {
        cout << p1->getArea() << endl;
        p1++; // 다음 원소의 주소로 증가
    }

    // Q. 원의 개수를 입력 받고 Circle 배열을 동적 생성하라. 반지를 값을 입력 받아 Circle 배열에 저장하고, 면적이 100~200인 원의 개수를 출력하라.
    cout << "생성하고자 하는 원의 개수?: ";
    int n, radius;
    cin >> n; // 원의 개수 입력
    // 동적 객체 배열
    Circle *pArray = new Circle[n]; // n개의 Circle 배열 생성
    for (int i = 0; i < n; i++)
    {
        cout << "원" << i + 1 << ": "; // 프롬프트 출력
        cin >> radius;                 // 반지름 입력
        pArray[i].setRadius(radius);   // 각 Circle객체 반지름 set
    }
    int count = 0; // 카운트 변수
    Circle *p = pArray;
    for (int i = 0; i < n; i++)
    {
        cout << p->getArea() << ' '; // 원의 면적 출력
        if (p->getArea() >= 100 && p->getArea() <= 200)
            count++;
        p++;
    }
    cout << endl
         << "면적이 100~200인 원의 개수는: " << count << endl;

    delete[] pArray;

    return 0;
}