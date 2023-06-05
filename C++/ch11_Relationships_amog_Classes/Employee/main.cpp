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

	cout << "��ü�� ����ȯ: " << endl;
*/
	Employee* C[10]; // ��ü������ �迭
	char choice;
	int index=0;

	while(true)
	{
		ShowMenu();
		cout << " �޴��� �����ϼ��� : ";
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
				cout << "�߸� ���� �ϼ̽��ϴ�." << endl;
				break;
		}
	}
	return 0;
}

void ShowList(Employee** C, int index) {
	for(int i=0; i<index; i++)
	{
		cout << "�̸� : " << C[i]->GetName() << endl;
		cout << "���� : " << C[i]->GetPay() << "��" << endl << endl;
	}
}
void MemRelease(Employee** C, int index) {
	for(int i=0; i<index; i++)
	{
		delete C[i]; C[i] = NULL;
	}
}
void ShowMenu() {
	cout << "========== �޴� ==========" << endl;
	cout << " 1. ���� �Է� [Permanent]" << endl;
	cout << " 2. ���� �Է� [Temporary]" << endl;
	cout << " 3. ���� �Է� [SalesPerson]" << endl;
	cout << " 4. ��� ���� �޿� ����" << endl;
	cout << " 5. �� ��" << endl;
	cout << "--------------------------" << endl;
}
void AddPermanent(Employee** C, int& index) {
	int sal;
    char name[20];

	cout << "�̸� : ";
	cin >> name;
	cout << "���� : ";
	cin >> sal;

	C[index++] = new Permanent(name, sal);
}
void AddTemporary(Employee** C, int& index) {
	int time, hourpay;
	char name[20];

	cout << "�̸� : ";
	cin >> name;
	cout << "�ð� : ";
	cin >> time;
	cout << "�ñ� : ";
	cin >> hourpay;

	C[index++] = new Temporary(name, time, hourpay);
}
void AddSalesPerson(Employee** C, int& index) {
	int bpay;
	int rev;
    string name;

	cout << "�̸� : ";
	cin >> name;
	cout << "�⺻�� : ";
	cin >> bpay;
	cout << "����� : ";
	cin >> rev;
	C[index++] = new SalesPerson(name, bpay, rev);
}

