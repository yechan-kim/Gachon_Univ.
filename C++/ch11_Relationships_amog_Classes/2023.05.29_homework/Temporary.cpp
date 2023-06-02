#include <iostream>
#include <string>
#include "Employee.h"
#include "Temporary.h"

using namespace std;

Temporary::Temporary()
    : Employee()
{
    hours = 0;
    hourlyWage = 0;
    cout << "Temporary con w/o parameter" << endl;
}

Temporary::Temporary(string name, int hours, int hourlyWage)
    : Employee(name)
{
    this->hours = hours;
    this->hourlyWage = hourlyWage;
    cout << "Temporary con with parameter" << endl;
}

Temporary::Temporary(const Temporary &t)
    : Employee(t)
{
    this->hours = t.hours;
    this->hourlyWage = t.hourlyWage;
    cout << "Temporary copy con" << endl;
}

Temporary::~Temporary()
{
    cout << "Temporary decon" << endl;
}

string Temporary::GetName() const
{
    return name;
}

int Temporary::GetPay() const
{
    return Employee::GetPay() + hours * hourlyWage;
}