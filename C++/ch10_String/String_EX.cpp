#include <iostream>
#include <string>
using namespace std;
int main() {
	string strg6;
	cout << "문자열을 입력하세요: ";
	cin >> strg6;
	cout << "strg6(cin): " << strg6 << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//한 줄씩 읽어들이기
	cout << "한줄을 입력하세요.: ";
	getline(cin, strg6,'\n'); //default =='\n'
	cout << "strg6(getline): " << strg6 << endl;
	//한 줄 입력 받아서 출력하기 until enter only via while(true)
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string strg7;
	while (true)
	{
		cout << "한 줄을 입력하세요.: ";
		getline(cin, strg7);
		if (strg7.empty())
		{
			cout << "연속 한 줄 입력 종료";
			break;
		}
		cout << strg7 << endl;
			
	}
	//string strg1; //매개변수 없는 생성자
	//if (strg1.empty() == true)
	//	cout << "strg1 is empty." << endl;
	//string strg2("hello"); //매개변수 있는 생성자
	//string strg3 = "hello everybody"; // == strg3("hello everybody"), 매개변수 있는 생성자
	//string strg4(strg2); // 복사 생성자
	//cout << "strg4: " << strg4 << endl;
	//copy
	//strg1 = strg3;
	//cout << "strg1: " << strg1 << endl;
	//if (strg1.empty() == true)
	//	cout << "strg1 is empty." << endl;
	//else
	//	cout << "strg1 is not empty." << endl;
	//문자열 비교 및 연결
	//string strg5 = "Alpha Go";
	//bool b = (strg5 == strg3);
	//cout << boolalpha << b << endl;
	//char A[] = "Grace";
	//cout << "strg5 == A: " << boolalpha << (strg5 == A) << endl;
	//사용자에게 first_name, last_name, middle_initial을 따로따로 받아 결합하여 출력하기.
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