#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	// space 있는 암호 두번째로
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true)
	{
		cout << "암호: ";
		cin.getline(password, 10);
		if (strcmp(password, "C ++") == 0)
		{
			cout << "passsword is correct. 프로그램을 정상 종료합니다." << endl;
			break;
		}
		else if (strcmp(password, "\0") == 0)
		{
			cout << "입력중지. 프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}
}

/*
istream의 cin.getline() 함수

	선언방식
	cin.getline(char str, streamsize n);
	cin.getline(char str, streamsize n, char dlim);

	설명
	C언어 스타일의 문자열을 입력 받을 때 사용 (char형 배열, 베열의 끝이 \0, 띄어쓰기 포함)
	크기 n을 지정하면 (n-1)개의 문자를 읽어와 str 배열에 저장 (마지막은 \0이기 때문에 마지막은 입력을 안받음)
	지정한 delimiter를 만나기 전까지 모든 문자를 읽어서 str 배열에 저장 (디폴트 구분자는 EOL)
*/