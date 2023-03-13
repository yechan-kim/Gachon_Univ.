#include <iostream>
using namespace std;

int main()
{
	cout << "sizeof(int): " << sizeof(int) << endl;
	char name1[6] = {'G', 'r', 'a', 'c', 'e', '\0'}; // name1 is a string with "Grace"
	char name2[5] = {'G', 'r', 'a', 'c', 'e'};		 // name2 is a char array (문자배열)
	cout << "sizeof(name1): " << sizeof(name1) << endl;
	cout << "sizeof(name2): " << sizeof(name2) << endl;
	cout << "sizeof(Grace): " << sizeof("Grace") << endl;
	cout << "strlen(name1): " << strlen(name1) << endl;
	cout << "strlen(name2): " << strlen(name2) << endl; // NULL문자를 만날때 까지
	cout << "strlen(Grace): " << strlen("Grace") << endl;
	cout << name1 << endl;
	cout << name2 << endl; // NULL문자를 만날때 까지
	// 주소를 입력받아 출력하기
	// char address[100];
	// cout << "주소입력: ";
	////cin >> address;
	////cout << "입력된 주소는 " << address << " 입니다." << endl;
	// cin.getline(address, 100, '\n');
	// cout << "입력된 주소는 " << address << " 입니다." << endl;

	return 0;
}