#include <iostream>
using namespace std;
#include <string>
#include "Employee.h"
#include "SalesPerson.h"

SalesPerson::SalesPerson(string name, int base, int rev) 
	:Employee(name)
{
	this->basePay = base; this->salesRevenue = rev;
}
SalesPerson::SalesPerson(const SalesPerson& s)
	:Employee(s)
{
	this->basePay = s.basePay; this->salesRevenue = s.salesRevenue;
}
SalesPerson::~SalesPerson() {
}
int SalesPerson::GetPay() {
	return (int)(basePay + ((double)salesRevenue * 0.15));
}

