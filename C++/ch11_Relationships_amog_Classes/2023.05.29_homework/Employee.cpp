#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee()
{
    name = '\0';
    cout << "Employee con w/o parameter" << endl;
}

Employee::Employee(string name)
{
    this->name = name;
    cout << "Employee con with parameter" << endl;
}

Employee::Employee(const Employee &e)
{
    this->name = e.name;
    cout << "Employee copy con" << endl;
}

Employee::~Employee()
{
    cout << "Employee virtual decon" << endl;
}

string Employee::GetName()
{
    return name;
}

int Employee::GetPay()
{
    return 0;
}