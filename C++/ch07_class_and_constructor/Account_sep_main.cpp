#include <iostream>
#include "Account_sep.h"

using namespace std;

void printMenu();
void MakeAccount(Account *acc, int &index, int size);
void Deposit(Account *acc, int &index);
void Withdraw(Account *acc, int &index);
void Inquire(Account *acc, int &index);

int main()
{
	cout << "1. 동적 객체배열 방식" << endl;

	int size;
	// 사용자에게 size를 물어 동적 객체 배열을 만들기
	cout << "객체의 개수를 입력하세요: ";
	cin >> size;
	Account *acc = new Account[size]; // 동적 객체배열
	int index = 0;

	int choice = 0;
	while (true)
	{
		printMenu();
		// 사용자 input을 받아 memu leave 할 수 있도록 coding
		cout << endl;
		cout << "선택: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			MakeAccount(acc, index, size);
			break;
		case 2:
			Deposit(acc, index);
			break;
		case 3:
			Withdraw(acc, index);
			break;
		case 4:
			Inquire(acc, index);
			break;
		case 5:
			delete[] acc;
			return 0;
		default:
			cout << "선택이 틀렸습니다." << endl;
			break;
		}
	}

	return 0;
}

void printMenu()
{
	cout << "----------MENU----------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 전체조회" << endl;
	cout << "5. 종료" << endl;
}

void MakeAccount(Account *acc, int &index, int size)
{
	int id, bal;
	char name[NAME_LEN];

	if (index < size)
	{
		cout << endl;
		cout << "계좌개설을 위한 입력(계좌 ID, 잔액, 이름): ";
		cin >> id >> bal >> name;
		acc[index].SetId(id);
		acc[index].SetBalance(bal);
		acc[index].SetName(name);
		index++;
		cout << endl;
	}
	else
		cout << "최대 " << size << "개의 계좌를 만들 수 있음" << endl;
}
void Deposit(Account *acc, int &index)
{
	int m, id, bal;
	bool found = false;

	cout << "계좌 ID: ";
	cin >> id;

	cout << "입금액: ";
	cin >> m;

	for (int i = 0; i < index; i++)
	{
		if (acc[i].GetId() == id)
		{
			found = true;
			bal = acc[i].InMoney(m);
			cout << "현재잔고: " << bal << endl;
			break;
		}
	}
	if (!found)
		cout << "존재하지 않는 ID 입니다." << endl;
}
void Withdraw(Account *acc, int &index)
{
	int m, id, bal;
	bool found = false;

	cout << "계좌 ID: ";
	cin >> id;

	cout << "출금액: ";
	cin >> m;

	for (int i = 0; i < index; i++)
	{
		if (acc[i].GetId() == id)
		{
			found = true;
			if (acc[i].GetBalance() < m)
				cout << "잔액부족" << endl;
			else
			{
				bal = acc[i].OutMoney(m);
				cout << "현재잔고: " << bal << endl;
			}
			break;
		}
	}
	if (!found)
		cout << "존재하지 않는 ID 입니다." << endl;
}
void Inquire(Account *acc, int &index)
{
	for (int i = 0; i < index; i++)
		acc[i].ShowAllData();
}