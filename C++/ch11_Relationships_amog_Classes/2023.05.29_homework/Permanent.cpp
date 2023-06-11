#include <iostream>  // 이 파일에서 사용하는 헤더파일을 먼저 include
#include <string>
#include "Employee.h" // 직접만든 헤더파일은 ""로 감싼다.
#include "Permanent.h"

using namespace std;

Permanent::Permanent() // 매개변수 없는 생성자
    : Employee() // initializer list를 사용하여 base 클래스의 생성자를 호출한다. => 생성자 호출 시 가장 먼저 실행 => 호출하는 생성자와 같은 종류의 생성자 호출
{
    salary = 0;
    cout << "Permanent con w/o parameter" << endl;
}

Permanent::Permanent(string name, int salary) // 매개변수 있는 생성자
    : Employee(name)
{
    this->salary = salary;
    cout << "Permanent con with parameter" << endl;
}

Permanent::Permanent(const Permanent &p) // 복사 생성자
    : Employee(p) // 암묵적 형변환을 통해 base 클래스의 복사 생성자 호출 => upcasting
{
    this->salary = p.salary;
    cout << "Permanent copy con" << endl;
}

Permanent::~Permanent() // 소멸자
{
    cout << "Permanent decon" << endl;
}

string Permanent::GetName() const // name의 getter
{
    return name;
}

int Permanent::GetPay() const // pay의 getter
{
    return salary;
}