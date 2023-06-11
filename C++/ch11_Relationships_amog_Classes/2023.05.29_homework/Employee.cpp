#include <iostream> // 이 파일에서 사용하는 헤더파일을 먼저 include
#include <string>
#include "Employee.h" // 직접만든 헤더파일은 ""로 감싼다.

using namespace std;

Employee::Employee() // 매개변수 없는 생성자
{
    name = '\0';
    cout << "Employee con w/o parameter" << endl;
}

Employee::Employee(string name) // 매개변수 있는 생성자
{
    this->name = name;
    cout << "Employee con with parameter" << endl;
}

Employee::Employee(const Employee &e) // 복사 생성자
{
    this->name = e.name;
    cout << "Employee copy con" << endl;
}

Employee::~Employee() // 소멸자
{
    cout << "Employee decon" << endl;
}

string Employee::GetName() const // name의 getter => 가상함수 이기 때문에 실질적인 역할은 없다.
{
    return name;
}

int Employee::GetPay() const // pay의 getter => 가상함수 이기 때문에 실질적인 역할은 없다.
{
    return 0;
}