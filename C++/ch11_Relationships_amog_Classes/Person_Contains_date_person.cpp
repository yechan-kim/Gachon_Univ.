/***************************************************************
 * Person 클래스의 구현 파일                                        *
 ***************************************************************/
#include <iostream>
#include <cassert>
#include "Person_Contains_date_date.h"
#include "Person_Contains_date_person.h"

using namespace std;

// 생성자
Person::Person(long identity, const Date &birthDate)
    : birthDate(birthDate)
{
    this->identity = identity;
    assert(identity > 111111111 && identity < 999999999);
    cout << "Person클래스 con with parameter" << endl;
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
    birthDate.print();
    cout << endl;
}