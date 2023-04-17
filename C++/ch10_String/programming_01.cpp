#include <iostream>
#include <string>

using namespace std;

int string_len(string s, char c)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (c == s.at(i))
            cnt++;
    }
    return cnt;
}

int main()
{
    string s;
    char c;
    cout << "문자열을 입력하세요.: ";
    getline(cin, s);
    cout << "찾을 문자를 입력하세요.: ";
    cin >> c;
    cout << string_len(s, c) << endl;

    return 0;
}
