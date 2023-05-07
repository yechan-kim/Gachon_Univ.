#include <iostream>
#include <string>
#include "programming_04.h"

using namespace std;

string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

void Person::setName(string value)
{
    name = value;
}

void Person::setAge(int value)
{
    age = value;
}

Person::Person(string v_name, int v_age)
{
    name = v_name;
    age = v_age;
    cout << "매개변수가 있는 생성자가 호출 되었습니다." << endl;
}

Person::~Person()
{
    cout << "소멸자가 호출 되었습니다." << endl;
}