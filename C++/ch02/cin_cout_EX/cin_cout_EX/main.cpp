#include <iostream>

using namespace std;

int main()
{
	// 주소를 입력받아 출력하기
	char address[100];
	cout << "주소입력: ";
	// cin >> address;
	// cout << "입력된 주소는 " << address << " 입니다." << endl;
	cin.getline(address, 100, '\n');
	cout << "입력된 주소는 " << address << " 입니다." << endl;
}