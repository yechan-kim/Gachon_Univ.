#ifndef TEMPORARY_H // temporary.h가 이미 include되어 있다면, 이 파일의 내용을 무시 => temporary.h가 중복으로 include되는 것을 방지
#define TEMPORARY_H

#include <iostream> // 이 파일에서 사용하는 헤더파일을 먼저 include
#include <string>
#include "Employee.h" // 직접만든 헤더파일은 ""로 감싼다.

using namespace std;

class Temporary : public Employee // derived 클래스 선언부 => base 클래스의 선언부에는 붙이지 않는다.
{
private:
    int hours;
    int hourlyWage;

public:
    Temporary(); // 매개변수 없는 생성자
    Temporary(string name, int hours, int hourlyWage); // 매개변수 있는 생성자
    Temporary(const Temporary &t); // 복사 생성자
    ~Temporary(); // 소멸자
    string GetName() const; // name의 getter
    int GetPay() const; // pay의 getter
};
#endif