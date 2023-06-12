#include <iostream>
#include "Employee.h"
#include "Permanent.h"
#include "SalesPerson.h"
#include "Temporary.h"
using namespace std;

//Client

enum {PERMANENT='1', TEMPORARY, SALESPERSON, ALLDATASHOW, QUIT};
void ShowList(Employee** C, int index);
void MemRelease(Employee** C, int index);
void ShowMenu();
void AddPermanent(Employee** C, int& index);
void AddTemporary(Employee** C, int& index);
void AddSalesPerson(Employee** C, int& index);

int main()
{
/*
	Employee e1;
	cout << e1.GetName() << endl;
	Employee e2("Alpha");
	cout << e2.GetName() << endl;
	Permanent p1("Bob", 3000000);
	cout << p1.GetName() << endl;
	cout << p1.GetPay() << endl;
	SalesPerson s1("Cindy", 1000000, 5000000);
	cout << s1.GetName() << endl;
	cout << s1.GetPay() << endl;
	Temporary t1("Jeff", 5, 200000);
	cout << t1.GetName() << endl;
	cout << t1.GetPay() << endl;

	cout << "객체간 형변환: " << endl;
*/
	Employee* C[10]; // 객체포인터 배열
	char choice;
	int index=0;

	while(true)
	{
		ShowMenu();
		cout << " 메뉴를 선택하세요 : ";
		cin >> choice;
		cout << endl;

		switch(choice)
		{
			case PERMANENT:
				AddPermanent(C, index);
				break;
			case TEMPORARY:
				AddTemporary(C, index);
				break;
			case SALESPERSON:
				AddSalesPerson(C, index);
				break;
			case ALLDATASHOW:
				ShowList(C, index);
				break;
			case QUIT:
				MemRelease(C, index);
				return 0;
			default:
				cout << "잘못 선택 하셨습니다." << endl;
				break;
		}
	}
	return 0;
}

void ShowList(Employee** C, int index) {
	for(int i=0; i<index; i++)
	{
		cout << "이름 : " << C[i]->GetName() << endl;
		cout << "월급 : " << C[i]->GetPay() << "원" << endl << endl;
	}
}
void MemRelease(Employee** C, int index) {
	for(int i=0; i<index; i++)
	{
		delete C[i]; C[i] = NULL;
	}
}
void ShowMenu() {
	cout << "========== 메뉴 ==========" << endl;
	cout << " 1. 직원 입력 [Permanent]" << endl;
	cout << " 2. 직원 입력 [Temporary]" << endl;
	cout << " 3. 직원 입력 [SalesPerson]" << endl;
	cout << " 4. 모든 직원 급여 보기" << endl;
	cout << " 5. 종 료" << endl;
	cout << "--------------------------" << endl;
}
void AddPermanent(Employee** C, int& index) {
	int sal;
    char name[20];

	cout << "이름 : ";
	cin >> name;
	cout << "월급 : ";
	cin >> sal;

	C[index++] = new Permanent(name, sal);
}
void AddTemporary(Employee** C, int& index) {
	int time, hourpay;
	char name[20];

	cout << "이름 : ";
	cin >> name;
	cout << "시간 : ";
	cin >> time;
	cout << "시급 : ";
	cin >> hourpay;

	C[index++] = new Temporary(name, time, hourpay);
}
void AddSalesPerson(Employee** C, int& index) {
	int bpay;
	int rev;
    string name;

	cout << "이름 : ";
	cin >> name;
	cout << "기본급 : ";
	cin >> bpay;
	cout << "매출액 : ";
	cin >> rev;
	C[index++] = new SalesPerson(name, bpay, rev);
}