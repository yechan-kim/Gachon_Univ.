#include <iostream>
#include <string>

using namespace std;

string s_comapre(string s1, string s2);

int main()
{
    string s1;
    cout << "문자열1을 입력하세요.: ";
    getline(cin, s1);
    string s2;
    cout << "문자열2을 입력하세요.: ";
    getline(cin, s2);
    ;
    string result = s_comapre(s1, s2);
    cout << result << endl;

    return 0;
}

string s_comapre(string s1, string s2)
{
    string result;

    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
                result.push_back(s2[j]);
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        int j = i + 1;

        while (j < result.size())
        {
            if (result[i] == result[j])
                result.erase(j, 1);
            else
                j++;
        }
    }

    return result;
}