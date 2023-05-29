#include <iostream>
#include <string>
#include "Basic_inheritance_AAA.h"
#include "Basic_inheritance_BBB.h"

using namespace std;

int main()
{
    cout << "sizeof(AAA): " << sizeof(AAA) << " sizeof(BBB): " << sizeof(BBB) << endl;
    
    AAA a;
    // a.pri = 0; a.pro = 100;
    a.pub = 1000;

    BBB b(100, "Jeffrey");
    cout << "sizeof(b): " << sizeof(b) << endl;
    b.pub = 200;
    b.SetData();
    b.Print();

    return 0;
}