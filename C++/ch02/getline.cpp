#include <iostream>
using namespace std;

int main()
{
    cout << "주소를 입력하세요: ";

    char address[100];
    cin.getline(address, 100, '\n'); // 키보드로 부터 주소 읽기

    cout << "주소는 " << address << "입니다.\n"; // 주소 출력

    char name1[6] = {'G', 'r', 'a', 'c', 'e', '\0'}; // name1 is a string with "Grace"
    char name2[5] = {'G', 'r', 'a', 'c', 'e'};       // name2 is a char array -> there isn't '\0' in array string need '\0' end of char array

    cout << sizeof(name1) << " " << sizeof(name2) << " " << sizeof("Grace") << endl;
    cout << strlen(name1) << " " << strlen(name2) << " " << strlen("Grace") << endl;

    return 0;
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