#include <iostream>

using namespace std;

class One
{
private:
    int x, y; // member data
public:
    int getX() const; // member function
    int getY() const;
    One(int X, int Y);
    ~One();
};

int One::getX() const
{
    return x;
}

int One::getY() const
{
    return y;
}

One::One(int X, int Y)
    : x(X), y(Y)
{
    cout << "매개변수가 있는 생성자가 호출되었습니다." << endl;
}

One::~One()
{
    cout << "소멸자가 호출되었습니다." << endl;
}

int main()
{
    One one1(10, 20);

    cout << "one1.getX(): " << one1.getX() << ", one1.getY(): " << one1.getY() << endl;

    return 0;
}