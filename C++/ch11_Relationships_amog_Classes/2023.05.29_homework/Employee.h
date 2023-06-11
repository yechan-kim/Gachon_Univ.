#ifndef EMPLOYEE_H // employee.h가 이미 include되어 있다면, 이 파일의 내용을 무시 => employee.h가 중복으로 include되는 것을 방지
#define EMPLOYEE_H 

#include <string> // 이 파일에서 사용하는 헤더파일을 먼저 include한다.

using namespace std;

class Employee
{
protected: // 상속을 위해 protected로 선언 => derived 클래스에서 접근 가능
    string name;

public:
    Employee(); // 매개변수 없는 생성자
    Employee(string name); // 매개변수 있는 생성자
    Employee(const Employee &e); // 복사 생성자
    virtual ~Employee(); // 가상 소멸자
    virtual string GetName() const; // 가상 함수
    virtual int GetPay() const; // 가상 함수
};
#endif

// 가상함수를 사용하는 이유 :  base 객체 포인터 배열에 derived 객체를 저장하고 member function을 호출할 때, base 객체 포인터 배열의 원소가 가리키는 객체의 member function을 호출하기 위해서
// 가상함수를 구현법: virtual 한정자를 base 클래스의 member function 선언부(*.h 파일)에 붙이고, derived 클래스의 member function 선언부(*.h 파일)에는 붙이지 않는다.
// 가상소멸자도 같은 이유로 사용한다. => 가상 소멸자를 사용하지 않으면, base 클래스의 소멸자만 호출되고 derived 클래스의 소멸자는 호출되지 않기 때문