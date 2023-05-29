#ifndef TEMPORARY_H
#define TEMPORARY_H

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Temporary : public Employee
{
private:
    int hours;
    int hourlyWage;

public:
    Temporary();
    Temporary(string name, int hours, int hourlyWage);
    Temporary(const Temporary &t);
    virtual ~Temporary();
    string GetName();
    int GetPay();
};
#endif