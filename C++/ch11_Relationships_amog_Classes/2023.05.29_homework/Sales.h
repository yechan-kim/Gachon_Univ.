#ifndef SALES_H
#define SALES_H

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Sales : public Employee
{
private:
    int basePay;
    int salesRevenue;

public:
    Sales();
    Sales(string name, int basePay, int salesRevenue);
    Sales(const Sales &s);
    ~Sales();
    string GetName() const;
    int GetPay() const;
};
#endif