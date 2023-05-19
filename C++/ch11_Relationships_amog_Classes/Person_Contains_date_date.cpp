/***************************************************************
 * Date 클래스의 구현 파일                                          *
 ***************************************************************/
#include <iostream>
#include <cassert>
#include "Person_Contains_date_date.h"

using namespace std;

// 매개변수가 있는 생성자

Date::Date(int month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year;
    if (month < 1 || month > 12)
    {
        cout << "Month is out of range." << endl;
        assert(false);
    }
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day < 1 || day > daysInMonth[month])
    {
        cout << "Day is out of range." << endl;
        assert(false);
    }
    if (year < 1900 || year > 2099)
    {
        cout << "Year is out of range." << endl;
        assert(false);
    }
    cout << "Date클래스 con with parameter" << endl;
}

// 복사 생성자
Date::Date(const Date &obj)
{
    this->month = obj.month;
    this->day = obj.day;
    this->year = obj.year;
    cout << "Date클래스 copy con" << endl;
}

// 소멸자
Date::~Date()
{
    cout << "Date클래스 decon" << endl;
}

// print() 멤버 함수
void Date::print() const
{
    cout << "Date::print(): " << month << "/" << day << "/" << year << endl;
}