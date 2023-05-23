/***************************************************************
 * Person 클래스의 구현 파일                                        *
 ***************************************************************/
#include <iostream>
#include <cassert>
#include "Person_Contains_date_date.h"
#include "Person_Contains_date_person.h"

using namespace std;

// 매개변수 없는 생성자
Person::Person()
    : BirthDate()
{
    this->identity = 0;
    cout << "Person클래스 con w/o parameter" << endl;
}

// 매개변수 있는 생성자
Person::Person(long identity, const Date &bd)
    : BirthDate(bd)
{
    this->identity = identity;
    assert(identity > 111111111 && identity < 999999999);
    cout << "Person클래스 con with parameter" << endl;
}

// 복사 생정자
Person::Person(const Person &p)
    : BirthDate(p.BirthDate)
{
    this->identity = p.identity;
    cout << "Person클래스 copy con" << endl;
}
// 소멸자
Person::~Person()
{
    cout << "Person클래스 decon" << endl;
}

// print() 멤버 함수
void Person::print() const
{
    cout << "Person::print(): " << identity << endl;
    cout << "생년월일: ";
    BirthDate.print();
    cout << endl;
}