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