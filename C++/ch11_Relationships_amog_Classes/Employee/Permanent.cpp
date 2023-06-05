#include <iostream>
using namespace std;
#include <string>
#include "Permanent.h"

Permanent::Permanent(string name, int sal)
	:Employee(name) 
{
	salary = sal;
}
Permanent::Permanent(const Permanent& p)
	:Employee(p)
{
	salary = p.salary;
}
Permanent::~Permanent()
{
}
int Permanent::GetPay() {
	return salary;
}
