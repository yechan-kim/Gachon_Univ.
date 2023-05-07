#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;

public:
    void print() const;
    void print_l() const;
    void set_X(int num);
    void set_Y(int num);
    int get_X();
    int get_Y();
    double distance(int numx, int numy);
    Point();
    Point(int num1, int num2);
    ~Point();
};

void Point::print() const
{
    cout << "호스트 객체의 좌표 X: " << x << ", Y: " << y << endl;
}

void Point::print_l() const
{
    int numx, numy, right, up;

    cout << "호스트 객체와 비교하기 위한, x와 y좌표를 순서대로 입력하세요: ";
    cin >> numx >> numy;

    right = (x > numx);
    up = (y > numy);

    if (right == 1 && up == 1)
        cout << "호스트 객체는 입력된 좌표의 오른쪽 위에 있습니다." << endl;
    if (right == 1 && up == 0)
    {
        if (y == numy)
            cout << "호스트 객체는 입력된 좌표의 오른쪽에 있습니다." << endl;
        else
            cout << "호스트 객체는 입력된 좌표의 오른쪽 아래에 있습니다." << endl;
    }
    if (right == 0 && up == 1)
    {
        if (x == numx)
            cout << "호스트 객체는 입력된 좌표의 위쪽에 있습니다." << endl;
        else
            cout << "호스트 객체는 입력된 좌표의 왼쪽 위에 있습니다." << endl;
    }

    if (right == 0 && up == 0)
    {
        if (x == numx && y == numy)
            cout << "호스트 객체는 입력된 좌표와 같은 곳에 있습니다." << endl;
        else if (x == numx)
            cout << "호스트 객체는 입력된 좌표의 아래쪽에 있습니다." << endl;
        else if (y == numy)
            cout << "호스트 객체는 입력된 좌표의 왼쪽에 있습니다." << endl;
        else
            cout << "호스트 객체는 입력된 좌표의 왼쪽 아래에 있습니다." << endl;
    }
}

void Point::set_X(int num)
{
    x = num;
}

void Point::set_Y(int num)
{
    y = num;
}

int Point::get_X()
{
    return x;
}

int Point::get_Y()
{
    return y;
}

double Point::distance(int numx, int numy)
{
    return sqrt(pow((x - numx), 2) + pow((y - numy), 2));
}

Point::Point()
{
    x = 0;
    y = 0;
    cout << "매개변수가 없는 생성자가 호출 되었습니다." << endl;
}

Point::Point(int num1, int num2)
{
    x = num1;
    y = num2;
    cout << "매개변수가 있는 생성자가 호출 되었습니다." << endl;
}

Point::~Point()
{
    cout << "소멸자가 호출 되었습니다." << endl;
}

int main()
{
    Point p1(10, 20);
    Point p2;
    int x, y;

    p1.print();
    p1.print_l();

    cout << "호스트 객체와 거리를 젤 객체의 x, y좌표를 순서대로 입력하세요:";
    cin >> x >> y;
    p2.set_X(x);
    p2.set_Y(y);
    cout << "호스트 객체와의 거리는 " << p1.distance(p2.get_X(), p2.get_Y()) << " 입니다." << endl;

    return 0;
}