#include <iostream>
#include <cstring>

using namespace std;

char* Reverse_String(char* src, int len);
char* Reverse_String_Arr(char* src, int len);

int main()
{
	// 문자열 생성
	char original[] = "ABCDE";
	cout << "sizeof(original) in main: " << sizeof(original) << endl;

	int len = strlen(original);
	cout << "len: " << len << endl;

	// main에서 먼저 하고 함수 콜하기
	char* rev = new char[len + 1];

	// 문자열을 역순으로 복사
	for (int i = 0; i < len; i++)
		rev[i] = original[len - i - 1];

	// 새 문자열 끝에 NULL 추가 -> 문자열로 만들어준다.
	rev[len] = NULL;

	cout << "뒤집어진 문자열 in main: " << rev << endl;

	// 함수를 호출
	char* copy = Reverse_String(original, len);
	cout << "copy의 값: " << (void*)copy << endl;

	// 두 문자열을 출력
	cout << "original: " << original << endl;
	cout << "copy: " << copy << endl;

	// 새 문자열의 메모리를 해제
	delete[] copy;
	copy = NULL;

	// 문자열 하나 생성
	char original_Arr[] = "ABCDE";
	len = strlen(original_Arr);

	// 함수를 호출
	char* copy_Arr = Reverse_String_Arr(original_Arr, len);
	cout << "copy_Arr의 값: " << (void*)copy_Arr << endl;

	// 두 문자열을 출력
	cout << "original: " << original_Arr << endl;
	cout << "copy: " << copy_Arr << endl;

	delete[] rev;
	rev = NULL;

	return 0;
}

char* Reverse_String(char* src, int len)
{
	cout << "sizeof(src) in 함수: " << sizeof(src) << endl;

	// 새로운 문자열을 보관할 메모리 할당
	char* reverse = new char[len + 1];

	// 문자열을 역순으로 복사
	for (int i = 0; i < len; i++)
		reverse[i] = src[len - i - 1];

	// 새 문자열 끝에  NULL 추가 -> 문자열로 만들어준다.
	reverse[len] = NULL;

	// 새 문자열 반환
	return reverse;
}

char* Reverse_String_Arr(char* src, int len)
{
	// 새로운 문자열을 보관할  메모리를 할당한다. -> 배열의 경우에는 넉넉하게 공간을 마련한다,.
	char reverse[100];

	// 문자열을 역순으로 복사한다,.
	for (int i = 0; i < len; i++)
		reverse[i] = src[len - i - 1];

	// 새 문자열 끝에 NULL 추가 -> 문자열로 만들어준다.
	reverse[len] = NULL;

	// 새 문자열 반환
	return reverse;
}