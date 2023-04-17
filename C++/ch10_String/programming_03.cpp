#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    char c;
    cout << "문자열을 입력하세요.: ";
    getline(cin, s);

    cout << "제거할 문자를 입력하세요.: ";
    cin >> c;

    s.erase(remove(s.begin(), s.end(), c), s.end());

    cout << s << endl;
    return 0;
}