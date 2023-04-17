#include <iostream>
#include <string>

using namespace std;

void removeDuplicates(string &s1);

int main()
{
    string s;
    cout << "문자열을 입력하세요.: ";
    getline(cin, s);
    removeDuplicates(s);
    cout << s << endl;

    return 0;
}

void removeDuplicates(string &s1)
{
    for (int i = 0; i < s1.size(); i++)
    {
        int j = i + 1;
        while (j < s1.size())
        {
            if (s1[i] == s1[j])
                s1.erase(j, 1);
            else
                j++;
        }
    }
}