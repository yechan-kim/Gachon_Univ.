#include <iostream> // 이 파일에서 사용하는 헤더파일을 먼저 include
#include <string>
#include "Employee.h" // 직접만든 헤더파일은 ""로 감싼다.
#include "Temporary.h"

using namespace std;

Temporary::Temporary() // 매개변수 없는 생성자
    : Employee() // initializer list를 사용하여 base 클래스의 생성자를 호출한다. => 생성자 호출 시 가장 먼저 실행 => 호출하는 생성자와 같은 종류의 생성자 호출
{
    hours = 0;
    hourlyWage = 0;
    cout << "Temporary con w/o parameter" << endl;
}

Temporary::Temporary(string name, int hours, int hourlyWage) // 매개변수 있는 생성자
    : Employee(name)
{
    this->hours = hours;
    this->hourlyWage = hourlyWage;
    cout << "Temporary con with parameter" << endl;
}

Temporary::Temporary(const Temporary &t) // 복사 생성자
    : Employee(t) // 암묵적 형변환을 통해 base 클래스의 복사 생성자 호출 => upcasting
{
    this->hours = t.hours;
    this->hourlyWage = t.hourlyWage;
    cout << "Temporary copy con" << endl;
}

Temporary::~Temporary() // 소멸자
{
    cout << "Temporary decon" << endl;
}

string Temporary::GetName() const // name의 getter
{
    return name;
}

int Temporary::GetPay() const // pay의 getter
{
    return hours * hourlyWage;
}