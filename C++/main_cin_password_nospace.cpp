#include <iostream>

using namespace std;

int main()
{
	// space 없는 암호  먼저하고
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true)
	{
		cout << "암호: ";
		cin >> password;
		if (strcmp(password, "C++") == 0)
		{
			cout << "passsword is correct. 프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}
}

/*
cstring의 strcmp() 함수 -> cstring 해더파일은 왜 필요 없는가?

	선언방식
	strcmp(const char* s1, const char* s2);

	설명
	두 개의 문자열이 같은지 비교하고 싶을 때 사용
	크기 n을 지정하면 (n-1)개의 문자를 읽어와 str 배열에 저장 (마지막은 \0이기 때문에 마지막은 입력을 안받음)
	두 문자열이 같으면 0을, 같지 않으면 0이 아닌 값을 반환합니다. (s1이 크면 1, s2가 크면 -1을 반환)

	비교할 문자열의 길이까지 지정하고 싶을 때는 strncmp() 함수를 사용하면 된다.
	선언방식
	strncmp(const char* str1, const char* str2, size_t num); 
*/