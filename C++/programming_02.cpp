#include <iostream>

using namespace std;

class Two
{
private:
    int x; // member data
    char a;

public:
    int getX() const; // member function
    char getA() const;
    void setX(int value);
    void setA(char value);
    Two(int value1, char value2);
    ~Two();
};

int Two::getX() const
{
    return x;
}
char Two::getA() const
{
    return a;
}
void Two::setX(int value)
{
    x = value;
}
void Two::setA(char value)
{
    a = value;
}
Two::Two(int value1, char value2)
    : x(value1), a(value2)
{
    cout << "매개변수가 있는 생성자가 호출 되었습니다." << endl;
}

Two::~Two()
{
    cout << "소멸자가 호출 되었습니다." << endl;
}

int main()
{
    Two t(10, 'A');

    cout << "t.getX(): " << t.getX() << ", t.getA(): " << t.getA() << endl;

    t.setX(20);
    t.setA('B');

    cout << "t.getX(): " << t.getX() << ", t.getA(): " << t.getA() << endl;

    return 0;
}