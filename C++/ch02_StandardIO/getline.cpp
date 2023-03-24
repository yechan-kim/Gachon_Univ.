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