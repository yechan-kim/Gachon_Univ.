#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
protected:
    string name;

public:
    Employee();
    Employee(string name);
    Employee(const Employee &e);
    virtual ~Employee();
    string GetName();
    int GetPay();
};
#endif