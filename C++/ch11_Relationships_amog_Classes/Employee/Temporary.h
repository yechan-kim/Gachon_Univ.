#ifndef TEMPORARY_H
#define TEMPORARY_H
#include <string>
#include "Employee.h"
using namespace std;
/********** Temporary Class **********/ // Derived & Entity Class
class Temporary : public Employee
{
	int hours;
	int hourlyWage; // 시급기반
public:
	Temporary(string _name, int _hours, int _hourlyWage);
	Temporary(const Temporary& t);
	~Temporary();
	int GetPay();
}; 
#endif
