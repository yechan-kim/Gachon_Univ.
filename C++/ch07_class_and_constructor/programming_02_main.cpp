#include <iostream>
#include "programming_02.h"

using namespace std;

int main()
{
    Two t(10, 'A');

    cout << "t.getX(): " << t.getX() << ", t.getA(): " << t.getA() << endl;

    t.setX(20);
    t.setA('B');

    cout << "t.getX(): " << t.getX() << ", t.getA(): " << t.getA() << endl;

    return 0;
}