#include <iostream>
#include <string>
using namespace std;
int main() {
	string strg6;
	cout << "���ڿ��� �Է��ϼ���: ";
	cin >> strg6;
	cout << "strg6(cin): " << strg6 << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//�� �پ� �о���̱�
	cout << "������ �Է��ϼ���.: ";
	getline(cin, strg6,'\n'); //default =='\n'
	cout << "strg6(getline): " << strg6 << endl;
	//�� �� �Է� �޾Ƽ� ����ϱ� until enter only via while(true)
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string strg7;
	while (true)
	{
		cout << "�� ���� �Է��ϼ���.: ";
		getline(cin, strg7);
		if (strg7.empty())
		{
			cout << "���� �� �� �Է� ����";
			break;
		}
		cout << strg7 << endl;
			
	}
	//string strg1; //�Ű����� ���� ������
	//if (strg1.empty() == true)
	//	cout << "strg1 is empty." << endl;
	//string strg2("hello"); //�Ű����� �ִ� ������
	//string strg3 = "hello everybody"; // == strg3("hello everybody"), �Ű����� �ִ� ������
	//string strg4(strg2); // ���� ������
	//cout << "strg4: " << strg4 << endl;
	//copy
	//strg1 = strg3;
	//cout << "strg1: " << strg1 << endl;
	//if (strg1.empty() == true)
	//	cout << "strg1 is empty." << endl;
	//else
	//	cout << "strg1 is not empty." << endl;
	//���ڿ� �� �� ����
	//string strg5 = "Alpha Go";
	//bool b = (strg5 == strg3);
	//cout << boolalpha << b << endl;
	//char A[] = "Grace";
	//cout << "strg5 == A: " << boolalpha << (strg5 == A) << endl;
	//����ڿ��� first_name, last_name, middle_initial�� ���ε��� �޾� �����Ͽ� ����ϱ�.
	//string first, last;
	//char init;
	//cout << "first_name: ";
	//cin >> first;
	//cout << "last_name: ";
	//cin >> last;
	//cout << "middle_initial: ";
	//cin >> init;
	//string orig = first + " " + init + ". " + last;
	//cout << "name: " << orig << endl;

	return 0;
}