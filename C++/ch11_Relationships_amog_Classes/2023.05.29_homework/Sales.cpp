#include <iostream> // 이 파일에서 사용하는 헤더파일을 먼저 include
#include <string>
#include "Employee.h" // 직접만든 헤더파일은 ""로 감싼다.
#include "Sales.h"

using namespace std;

Sales::Sales() // 매개변수 없는 생성자
    : Employee() // initializer list를 사용하여 base 클래스의 생성자를 호출한다. => 생성자 호출 시 가장 먼저 실행 => 호출하는 생성자와 같은 종류의 생성자 호출
{
    basePay = 0;
    salesRevenue = 0;
    cout << "Sales con w/o parameter" << endl;
}

Sales::Sales(string name, int basePay, int salesRevenue) // 매개변수 있는 생성자
    : Employee(name)
{
    this->basePay = basePay;
    this->salesRevenue = salesRevenue;
    cout << "Sales con with parameter" << endl;
}

Sales::Sales(const Sales &s) // 복사 생성자
    : Employee(s) // 암묵적 형변환을 통해 base 클래스의 복사 생성자 호출 => upcasting
{
    this->basePay = s.basePay;
    this->salesRevenue = s.salesRevenue;
    cout << "Sales copy con" << endl;
}

Sales::~Sales() // 소멸자
{
    cout << "Sales decon" << endl;
}

string Sales::GetName() const // name의 getter
{
    return name;
}

int Sales::GetPay() const // pay의 getter
{
    return (int)(basePay + (double)salesRevenue * 0.15);
}