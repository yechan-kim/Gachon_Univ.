#include <iostream>
using namespace std;
void A1();
void A2();
void A3();
void B1();
void B2();
void C1();
void main()
{
    cout << "in main() " << endl;
    A2();
    B1();
    C1();
}
void A1()
{
    cout << "in A1() " << endl;
    B1();
    B2();
}
void A2() { cout << "in A2() " << endl; }
void A3() { cout << "in A3() " << endl; }
void B1() { cout << "in B1() " << endl; }
void B2()
{
    cout << "in B2() " << endl;
    A2();
    B1();
}
void C1()
{
    cout << "in C1() " << endl;
    A1();
    A2();
}