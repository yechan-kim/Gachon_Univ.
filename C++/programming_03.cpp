#include <iostream>

using namespace std;

class Point
{
private:
    int x,y;

public:
    void print() const;
    void print_l() const;
    double distance(int numx, int numy);
    Point(int num1, int num2);
    ~Point();
};

void Point::print() const
{
    cout << "X: " << x << ", Y: " << y << endl;
}

void Point::print_l() const
{
    int numx, numy, right, up;

    cout << "객제의 좌표와 비교하기 위한, x와 y값을 순서대로 입력하세요: ";
    cin >> numx >> numy;

    right = (x > numx);
    up = (y > numy);

    if (right == 1 && up == 1)
        cout << "객체의 좌표는 입력된 좌표의 오른쪽 위에 있습니다." << endl;
    if (right == 1 && up == 0)
        cout << "객체의 좌표는 입력된 좌표의 오른쪽 아래에 있습니다." << endl;
    if (right == 0 && up == 1)
        cout << "객체의 좌표는 입력된 좌표의 왼쪽 위에 있습니다." << endl;
    if (right == 0 && up == 0)
    {
        if (x == numx && y == numy)
            cout << "객체의 좌표는 입력된 좌표와 같은 곳에 있습니다." << endl;
        else
            cout << "객체의 좌표는 입력된 좌표의 왼쪽 아래에 있습니다." << endl;
    }
}

double Point::distance(int numx, int numy)
{
    return sqrt(pow((x - numx), 2) + pow((y - numy), 2));
}

Point::Point(int num1, int num2)
{
    x=num1;
    y=num2;
    cout << "매개변수가 있는 생성자가 호출 되었습니다." << endl;
}

Point::~Point()
{
    cout << "소멸자가 호출 되었습니다." << endl;
}

int main()
{
    Point p(10,20);
    int x, y;

    p.print();
    p.print_l();

    cout << "객체의 좌표의 거리를 구하고자 하는 점의 x와 y값을 순서대로 입력하세요: ";
    cin >> x >> y;
    cout << "객체의 좌표와의 거리는 " << p.distance(x, y) << "입니다." << endl;

    return 0;
}