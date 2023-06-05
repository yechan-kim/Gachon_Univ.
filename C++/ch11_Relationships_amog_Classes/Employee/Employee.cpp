#include <iostream>
#include <string>

#include "Employee.h"
using namespace std;

Employee::Employee() {
	name = "";
}
Employee::Employee(string _name) {
	this->name = _name;
}
Employee::Employee(const Employee& e) {
	this->name = e.name;
}
Employee::~Employee() {
	
}
string Employee::GetName() {
	return name;
}
int Employee::GetPay() {
	return 0;
}
