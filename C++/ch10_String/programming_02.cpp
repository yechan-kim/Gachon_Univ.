#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "문자열을 입력하세요.: ";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
        s[i] = toupper(s[i]);
    cout << s << endl;

    return 0;
}