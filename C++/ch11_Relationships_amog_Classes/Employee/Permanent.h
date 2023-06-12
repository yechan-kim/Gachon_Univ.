#ifndef PERMANENT_H
#define PERMANENT_H
#include <string>
#include "Employee.h"
using namespace std;
/********** Permanent Class **********/ // Derived & Entity Class
class Permanent : public Employee
{
protected:
	int salary; // 월급기반
public:
	Permanent(string name, int sal);
	Permanent(const Permanent& p);
	~Permanent();
	int GetPay();
};
#endif