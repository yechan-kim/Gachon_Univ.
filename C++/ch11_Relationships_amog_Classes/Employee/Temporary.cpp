#include <iostream>
using namespace std;
#include <string>
#include "Temporary.h"
Temporary::Temporary(string _name, int _hours, int _hourlyWage)
	:Employee(_name)
{
	hours = _hours;
	hourlyWage = _hourlyWage;
}
Temporary::Temporary(const Temporary& t)
	:Employee(t)
{
	hours = t.hours;
	hourlyWage = t.hourlyWage;
}
Temporary::~Temporary() {
}
int Temporary::GetPay() {
	return (hours * hourlyWage);
}

