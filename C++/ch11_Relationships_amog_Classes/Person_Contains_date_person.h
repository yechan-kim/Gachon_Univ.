/***************************************************************
 * Person 클래스의 인터페이스 파일                                    *
 ***************************************************************/
#ifndef PERSON_CONTAINS_DATE_PERSON_H
#define PERSON_CONTAINS_DATE_PERSON_H
#include "Person_Contains_date_date.h"

// Person 클래스의 정의
class Person
{
private:
    long identity;
    Date BirthDate;

public:
    Person();
    Person(long identity, const Date &bd);
    Person(const Person &p);
    ~Person();
    void print() const;
};
#endif