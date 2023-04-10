#include <iostream>
#include <cstring>

using namespace std;

void swap_str(char *str1, char *str2);

const int MAX = 100;

int main()
{
    char A[MAX], B[MAX];

    cout << "처음 문자열: ";
    cin >> A;

    cout << "두번째 문자열: ";
    cin >> B;

    swap_str(A, B);

    cout << endl
         << "swap_string 콜 후" << endl
         << "-----------------------" << endl;
    cout << "처음 문자열은: " << A << endl
         << "두번째 문자열은: " << B << endl;

    return 0;
}

// void swap_str(char *str1, char *str2)
// {
//     char tp[MAX];
//     strcpy_s(tp, MAX, str1);
//     strcpy_s(str1, MAX, str2);
//     strcpy_s(str2, MAX, tp);
// }

void swap_str(char *str1, char *str2) // for vscode
{
    char tp[MAX];
    strcpy(tp, str1);
    strcpy(str1, str2);
    strcpy(str2, tp);
}