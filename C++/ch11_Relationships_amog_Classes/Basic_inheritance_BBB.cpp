#include <iostream>
#include <string>
#include "Basic_inheritance_AAA.h"
#include "Basic_inheritance_BBB.h"

using namespace std;

BBB::BBB()
{
    cout << "BBB con w/o parameters" << endl;
    b = 0;
    name[0] = '\0';
}
BBB::BBB(int bval, string s)
{
    cout << "BBB con with parameters" << endl;
    b = bval;
    name = s;
}
BBB::BBB(BBB& bb)
{
    cout << "BBB copy con" << endl;
    b = bb.b;
    name = bb.name;
}
BBB::~BBB()
{
    cout << "BBB decon" << endl;
}
void BBB::Print()
{
    cout << "BBB::Print() b:" << b << " name: " << name << endl;
    cout << "pro: " << pro << " pub: " << pub << endl;
    // cout << "pri: " << pri << endl;
}
void BBB::SetData()
{
    // pri = 5;
    pro = 6;
    pub = 7;
}