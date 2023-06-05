#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "virtual Base destructor" << endl;
    }
    // ~Base()
    // {
    //     cout << "Base destructor" << endl;
    // }
};

class Derived : public Base
{
public:
    // virtual ~Derived()
    // {
    //     cout << "virtual Derived destructor" << endl;
    // }
    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    Base *dp = new Derived();
    delete dp;

    Base *bp = new Derived();
    delete bp;

    return 0;
}