#ifndef SALES_H // sales.h가 이미 include되어 있다면, 이 파일의 내용을 무시 => sales.h가 중복으로 include되는 것을 방지
#define SALES_H

#include <iostream> // 이 파일에서 사용하는 헤더파일을 먼저 include
#include <string>
#include "Employee.h"

using namespace std;

class Sales : public Employee // derived 클래스 선언부 => base 클래스의 선언부에는 붙이지 않는다.
{
private:
    int basePay; // 기본급
    int salesRevenue; // 판매실적

public:
    Sales(); // 매개변수 없는 생성자
    Sales(string name, int basePay, int salesRevenue); // 매개변수 있는 생성자
    Sales(const Sales &s); // 복사 생성자
    ~Sales(); // 소멸자
    string GetName() const; // name의 getter
    int GetPay() const; // pay의 getter
};
#endif