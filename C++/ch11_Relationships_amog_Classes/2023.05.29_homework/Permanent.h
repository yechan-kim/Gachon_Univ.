#ifndef PERMANENT_H
#define PERMANENT_H

#include <iostream>
#include <string>
#include "Employee.h"

class Permanent : public Employee
{
private:
    int salary;

public:
    Permanent();
    Permanent(string name, int salary);
    Permanent(const Permanent &p);
    virtual ~Permanent();
    string GetName();
    int GetPay();
};
#endif