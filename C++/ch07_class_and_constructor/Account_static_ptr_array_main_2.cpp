#include <iostream>
using namespace std;
#include "Account.h"
void printMenu();
void MakeAccount(Account** C, int& CurrentIndex, int MaxAccount);
void Deposit(Account** C, int CurrentIndex);
void Withdraw(Account** C, int CurrentIndex);
void Inquire(Account** C, int CurrentIndex);
void CleanUp(Account** C, int CurrnetIndex);
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
const int ACCOUNT_MAX = 10;
int main() {
	cout << "sizeof(Account): " << sizeof(Account) << endl; // 12
	cout << "2. 객체포인터 배열 방식" << endl;
	Account* C[ACCOUNT_MAX]; // 배열을 스텍메모리에 생성 4byte * ACCOUNT_MAX 만큼 메모리 사용
	int size = ACCOUNT_MAX; // 최대 계좌 개수
	int index = 0;
	int choice;
	while (true)
	{
		printMenu();
		//사용자 input을 받아 memu leave 할 수 있도록 coding
		cout << "선택: ";
		cin >> choice;
		switch (choice)
		{
		case MAKE:
			cout << "계좌개설을 선택하였습니다." << endl;
			MakeAccount(C, index, size);
			break;
		case DEPOSIT:
			cout << "입금을 선택하였습니다." << endl;
			Deposit(C, index);
			break;
		case WITHDRAW:
			cout << "출금을 선택하였습니다." << endl;
			Withdraw(C, index);
			break;
		case INQUIRE:
			// cout << "전체조회를 선택하였습니다." << endl;
			Inquire(C, index);
			break;
		case EXIT:
			cout << "종료를 선택하였습니다." << endl;
			CleanUp(C, index);
			return 0;
		default:
			cout << "올바르지 않은 선택을 하였습니다." << endl;
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
void MakeAccount(Account** C, int& CurrentIndex, int MaxAccount)
{
	// size 와 index크기 비교
	// => full 상태면 개설 불가 msg출력
	// else 계좌ID, 잔액, 이름 입력 => setter 호출, CurrentIndex++
	int id, balance;
	char name[NAME_LEN];
	if (CurrentIndex < MaxAccount) {
		cout << "개좌개설을 위한 입력(계좌ID 잔액 이름): ";
		cin >> id >> balance >> name;
		C[CurrentIndex] = new Account(id, balance, name);
		//C[CurrentIndex] = new Account;
		//C[CurrentIndex]->SetId(id);
		//(*(C + CurrentIndex))->SetBalance(balance);
		//(**(C + CurrentIndex)).SetName(name);
		CurrentIndex++;
	}
	else {
		cout << "포화 상태입니다. 최대 ";
		cout << MaxAccount << "개의 계좌를 개설 할 수 있습니다." << endl;
	}
}
void Inquire(Account** C, int CurrentIndex) {
	for (int i = 0; i < CurrentIndex; i++) {
		//C[i]->ShowAllData();
		(*(C + i))->ShowAllData();
		//(**(C + i)).ShowAllData();
	}
}
// 사용자로 부터 ID와 입금액을 입력받아, ID의 존재유무 확인
// 존재하지 않으면 존재하지 않은 ID err_msg출력.
// else 해당하는 ID의 balance를 입금액 만큼 증가.
void Deposit(Account** C, int CurrentIndex) {
	int m, id;
	cout << "계좌ID: ";
	cin >> id;
	cout << "입금액:";
	cin >> m;
	bool found = false;
	int bal;
	for (int i = 0; i < CurrentIndex; i++)
	{
		if (C[i]->GetId() == id)
		{
			cout << "입금전 잔고: " << C[i]->GetBalance() << endl;
			bal = C[i]->InMoney(m);
			cout << "입금후 잔고: " << bal << endl;
			found = true;
			break;
		}
	}
	if (found == false)
		cout << "존재하지 않는 id입니다." << endl;

}
// 사용자로 부터 ID와 출금액을 입력받아, ID의 존재유무 확인
// 존재하지 않으면 존재하지 않은 ID err_msg출력.
// else 해당하는 ID의 balance를 출금액 만큼 감소. -> balance < 출금액 => err_msg 출력
void Withdraw(Account** C, int CurrentIndex) {
	int m, id, bal;
	cout << "계좌ID: ";
	cin >> id;
	cout << "출금액:";
	cin >> m;
	bool found = false;
	for (int i = 0; i < CurrentIndex; i++)
	{
		if ((*(C + i))->GetId() == id)
		{
			cout << "출금전 잔고: " << (**(C + i)).GetBalance() << endl;
			if (C[i]->OutMoney(m) == true)
				cout << "출금후 잔고: " << C[i]->GetBalance() << endl;
			else
				cout << "잔액부족" << endl;
			found = true;
			break;
		}
	}
	if (found == false)
		cout << "존재하지 않는 id입니다." << endl << endl;
}
void CleanUp(Account** C,int CurrnetIndex) {
	for (int i = 0; i < CurrnetIndex; i++)
	{
		delete C[i]; C[i] = NULL;
	}
}