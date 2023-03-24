#include <iostream>
using namespace std;

int main() {

	char password[101];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while(true) {
		cout << "암호: ";
		cin.getline(password, 100);
		if(strcmp(password, "C ++") == 0) {
			cout << "passsword is correct. 프로그램을 정상 종료합니다." << endl;
			break;
		}
		else if(strcmp(password, "\0") == 0) { // "", "\0"와 비교 가능, NULL은 안됨
			cout << "입력중지. 프로그램을 정상 종료합니다." << endl;
			break;
		}
		else 
			cout << "암호가 틀립니다~~" << endl;
	}
      return 0
}