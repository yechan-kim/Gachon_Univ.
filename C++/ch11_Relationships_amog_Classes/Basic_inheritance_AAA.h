#ifndef BASIC_INHERITANCE_AAA_H
#define BASIC_INHERITANCE_AAA_H

#include <iostream>
#include <string>

using namespace std;

class AAA
{
private:
    int pri;

protected:
    int pro;

public:
    int pub;

public:
    AAA();
    AAA(int a, int b, int c);
    AAA(AAA& a);
    ~AAA();
};
#endif