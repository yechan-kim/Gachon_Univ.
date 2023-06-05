#include <iostream>
#include <string>
#include "Employee.h"
#include "Sales.h"

using namespace std;

Sales::Sales()
    : Employee()
{
    basePay = 0;
    salesRevenue = 0;
    cout << "Sales con w/o parameter" << endl;
}

Sales::Sales(string name, int basePay, int salesRevenue)
    : Employee(name)
{
    this->basePay = basePay;
    this->salesRevenue = salesRevenue;
    cout << "Sales con with parameter" << endl;
}

Sales::Sales(const Sales &s)
    : Employee(s)
{
    this->basePay = s.basePay;
    this->salesRevenue = s.salesRevenue;
    cout << "Sales copy con" << endl;
}

Sales::~Sales()
{
    cout << "Sales decon" << endl;
}

string Sales::GetName() const
{
    return name;
}

int Sales::GetPay() const
{
    return (int)(basePay + (double)salesRevenue * 0.15);
}