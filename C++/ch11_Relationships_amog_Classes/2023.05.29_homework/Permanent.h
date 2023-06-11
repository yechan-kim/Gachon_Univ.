#ifndef PERMANENT_H // permanent.h가 이미 include되어 있다면, 이 파일의 내용을 무시 => permanent.h가 중복으로 include되는 것을 방지
#define PERMANENT_H

#include <iostream> // 이 파일에서 사용하는 헤더파일을 먼저 include
#include <string>
#include "Employee.h" // 직접만든 헤더파일은 ""로 감싼다.

class Permanent : public Employee // derived 클래스 선언부 => base 클래스의 선언부에는 붙이지 않는다.
{
private:
    int salary; // 연봉

public:
    Permanent(); // 매개변수 없는 생성자
    Permanent(string name, int salary); // 매개변수 있는 생성자
    Permanent(const Permanent &p); // 복사 생성자
    ~Permanent(); // 소멸자
    string GetName() const; // name의 getter
    int GetPay() const; // pay의 getter
};
#endif