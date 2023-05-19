#include <iostream>
#include "Account_static.h"

using namespace std;

Account::Account()
{
	cout << "인자 없는 생성자" << endl;
	id = 0;
	balance = 0;
	name = new char[NAME_LEN];
}
Account::Account(int id, int balance, char *name)
{
	cout << "인자 있는 생성자" << endl;
	this->id = id;
	this->balance = balance;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
Account::Account(const Account &a)
{
	cout << "복사 생성자" << endl;
	id = a.id;
	balance = a.balance;
	name = new char[strlen(a.name) + 1];
	strcpy(name, a.name);
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
	if (this->name)
	{
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
void Account::ShowAllData() const
{
	cout << "계좌ID: " << id;
	cout << "  잔액: " << balance;
	cout << "  이름: " << name << endl;
}
int Account::InMoney(int val)
{
	balance += val;
	return balance;
}
bool Account::OutMoney(int val)
{
	if (balance >= val)
	{
		balance -= val;
		return true;
	}
	else
		return false;
}
Account::~Account()
{
	cout << "소멸자" << endl;
	delete[] name;
}
Account &Account::operator=(const Account &a)
{
	if (this != &a)
	{
		delete[] name;
		name = new char[strlen(a.name) + 1];
		strcpy(name, a.name);
		id = a.id;
		balance = a.balance;
	}
	return *this;
}