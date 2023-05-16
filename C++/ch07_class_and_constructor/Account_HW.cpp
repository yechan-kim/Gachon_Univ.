#include <iostream>
#include <cstring>
#include "Account_HW.h"

using namespace std;

Account::Account()
{
    cout << "매개변수 없는 생성자" << endl;
    id = 0;
    balance = 0;
    name = new char[NAME_LEN];
    name[0] = '\0';
}
Account::Account(int id, int balance, char *name)
{
    cout << "매개변수 있는 생성자" << endl;
    this->id = id;
    this->balance = balance;
    this->name = new char[NAME_LEN];
    strcpy(this->name, name);
}
Account::Account(const Account &a)
{
    cout << "깊은 복사 생성자" << endl;
    id = a.id;
    balance = a.balance;
    name = new char[NAME_LEN];
    strcpy(name, a.name);
}
Account::~Account()
{
    cout << "소멸자 실행" << endl;
    delete[] name;
    name = NULL;
}
Account &Account::operator=(const Account &a)
{
    cout << "깊은 대입 연산자 overloading" << endl;
    if (this != &a)
    {
        id = a.id;
        balance = a.balance;
        delete[] name;
        name = new char[NAME_LEN];
        strcpy(name, a.name);
    }
    return *this;
}
void Account::ShowAllData() const
{
    cout << "ID: " << id << ", 이름: " << name << ", 잔액: " << balance << endl;
}
int Account::InMoney(int val)
{
    balance += val;
    return 0;
}
bool Account::OutMoney(int val)
{
    if (balance < val)
    {
        return false;
    }
    balance -= val;
    return true;
}
int Account::GetId() const
{
    return id;
}
int Account::GetBalance() const
{
    return balance;
}
char *Account::GetName() const
{
    return name;
}
void Account::SetId(int val)
{
    id = val;
}
void Account::SetBalance(int val)
{
    balance = val;
}
void Account::SetName(char *name)
{
    strcpy(this->name, name);
}