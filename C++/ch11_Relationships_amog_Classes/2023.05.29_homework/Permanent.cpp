#include <iostream>
#include <string>
#include "Employee.h"
#include "Permanent.h"

using namespace std;

Permanent::Permanent()
    : Employee()
{
    salary = 0;
    cout << "Permanent con w/o parameter" << endl;
}

Permanent::Permanent(string name, int salary)
    : Employee(name)
{
    this->salary = salary;
    cout << "Permanent con with parameter" << endl;
}

Permanent::Permanent(const Permanent &p)
    : Employee(p)
{
    this->salary = p.salary;
    cout << "Permanent copy con" << endl;
}

Permanent::~Permanent()
{
    cout << "Permanent decon" << endl;
}

string Permanent::GetName() const
{
    return name;
}

int Permanent::GetPay() const
{
    return salary;
}