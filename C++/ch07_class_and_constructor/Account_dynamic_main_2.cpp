#include <iostream>
using namespace std;
#include "Account_dynamic.h"
void printMenu();
void MakeAccount(Account* AA, int& CurrentIndex, int MaxAccount);
void Deposit(Account* AA, int CurrentIndex);
void Withdraw(Account* AA, int CurrentIndex);
void Inquire(Account* AA, int CurrentIndex);
void CleanUp(Account* AA);
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
int main() {
	cout << "sizeof(Account): " << sizeof(Account) << endl; // 12
	cout << "1. 동적 객체배열 방식" << endl;
	int size; // 최대 계좌 개수
	//사용자에게 size를 물어 동적 객체 배열을 만들기
	cout << "객체몇개?: ";
	cin >> size;
	Account* A = new Account[size]; // size의 개수 만큼 인자없는 생성자 호출
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
			MakeAccount(A, index, size);
			break;
		case DEPOSIT:
			cout << "입금을 선택하였습니다." << endl;
			Deposit(A, index);
			break;
		case WITHDRAW:
			cout << "출금을 선택하였습니다." << endl;
			Withdraw(A, index);
			break;
		case INQUIRE:
			// cout << "전체조회를 선택하였습니다." << endl;
			Inquire(A, index);
			break;
		case EXIT:
			cout << "종료를 선택하였습니다." << endl;
			CleanUp(A);
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
void MakeAccount(Account* AA, int& CurrentIndex, int MaxAccount)
{
	// size 와 index크기 비교
	// => full 상태면 개설 불가 msg출력
	// else 계좌ID, 잔액, 이름 입력 => setter 호출, CurrentIndex++
	int id, balance;
	char name[NAME_LEN];
	if (CurrentIndex < MaxAccount) {
		cout << "개좌개설을 위한 입력(계좌ID 잔액 이름): ";
		cin >> id >> balance >> name;
		AA[CurrentIndex].SetId(id);
		(AA + CurrentIndex)->SetBalance(balance); // AA 값의 변경은 없음.
		(AA + CurrentIndex)->SetName(name);
		CurrentIndex++;
	}
	else {
		cout << "포화 상태입니다. 최대 ";
		cout << MaxAccount << "개의 계좌를 개설 할 수 있습니다." << endl;
	}
}
void Inquire(Account* AA, int CurrentIndex) {
	for (int i = 0; i < CurrentIndex; i++)
		(AA + i)->ShowAllData(); // AA[i].ShowAllData()
}
// 사용자로 부터 ID와 입금액을 입력받아, ID의 존재유무 확인
// 존재하지 않으면 존재하지 않은 ID err_msg출력.
// else 해당하는 ID의 balance를 입금액 만큼 증가.
void Deposit(Account* AA, int CurrentIndex) {
	int m, id;
	cout << "계좌ID: ";
	cin >> id;
	cout << "입금액:";
	cin >> m;
	bool found = false;
	int bal;
	for (int i = 0; i < CurrentIndex; i++)
	{
		if (AA[i].GetId() == id)
		{
			cout << "입금전 잔고: " << AA[i].GetBalance() << endl;
			bal = AA[i].InMoney(m);
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
void Withdraw(Account* AA, int CurrentIndex) {
	int m, id, bal;
	cout << "계좌ID: ";
	cin >> id;
	cout << "출금액:";
	cin >> m;
	bool found = false;
	for (int i = 0; i < CurrentIndex; i++)
	{
		if (AA[i].GetId() == id)
		{
			cout << "출금전 잔고: " << AA[i].GetBalance() << endl;
			if (AA[i].OutMoney(m) == true) // if (AA[i].OutMoney(m))
				cout << "출금후 잔고: " << AA[i].GetBalance() << endl;
			else
				cout << "잔액부족" << endl;
			found = true;
			break;
		}
	}
	if (found == false)
		cout << "존재하지 않는 id입니다." << endl << endl;
}
void CleanUp(Account* AA) {
	delete[] AA; AA = NULL;
}