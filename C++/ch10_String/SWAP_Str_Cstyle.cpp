#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int MAX = 100;

// ���ڿ��� ����
void swap_string(char* cpp1, char* cpp2);

int main()
{
	char A[MAX], B[MAX]; //cstyle string

	cout << "ó�� ���ڿ�: ";
	cin.getline(A, MAX); //sapce ���

	cout << "�ι�° ���ڿ�: ";
	cin.getline(B, MAX);

	cout << "A: " << (void*)A << endl; //�ּ� ���
	cout << "B: " << (void*)B << endl;

	swap_string(A, B);

	cout << "swap_string �� ��" << endl;
	cout << "ó�� ���ڿ��� " << A << endl 
		<< "�ι�° ���ڿ��� " << B << endl
		<< "-----------------------\n"; //"\n"�� endl�� ���� ������ �Ѵ�.

	//cstyle�� ���ڿ� A,B�� c++ style ���ڿ��� ����� �����Ѵ�. (����!)
	return 0;
}

void swap_string(char* cpp1, char* cpp2)
{
	cout << "swap_string ��" << endl;
	cout << "cpp1: " << (void*)cpp1 << endl; //�ּ����
	cout << "cpp2: " << (void*)cpp2 << endl;

	cout << "&cpp1: " << &cpp1 << endl; //�� ���
	cout << "&cpp2: " << &cpp2 << endl;

	// //not working version, local ������ ����
	// char *tp;
	// tp = cpp1;
	// cpp1 = cpp2;
	// cpp2 = tp;

	 // working version -> vs code ������ strcpy�Լ� ���.
	 char tp[MAX];
	 strcpy_s(tp, MAX, cpp1);
	 strcpy_s(cpp1, MAX, cpp2);
	 strcpy_s(cpp2, MAX, tp);

	////working in vs code
	//char tp[MAX];
	//strcpy(tp, cpp1);
	//strcpy(cpp1, cpp2);
	//strcpy(cpp2, tp);
}