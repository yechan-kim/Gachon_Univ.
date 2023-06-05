#ifndef SALESPERSON_H
#define SALESPERSON_H
#include <string>
#include "Employee.h"
using namespace std;
/********** SalesPerson Class **********/ // Derived & Entity Class
class SalesPerson : public Employee
{
	int basePay;
	int salesRevenue;
public:
	SalesPerson(string name, int bpay, int rev);
	SalesPerson(const SalesPerson& s);
	~SalesPerson();
	int GetPay();
};
#endif
