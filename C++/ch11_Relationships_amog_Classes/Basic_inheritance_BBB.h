#ifndef BASIC_INHERITANCE_BBB_H
#define BASIC_INHERITANCE_BBB_H

#include <iostream>
#include <string>
#include "Basic_inheritance_AAA.h"

using namespace std;

class BBB : public AAA // 상속
{ 
private:
    int b;
    string name;

public:
    BBB();
    BBB(int bval, string s);
    BBB(BBB& bb);
    ~BBB();
    void Print();
    void SetData();
};
#endif