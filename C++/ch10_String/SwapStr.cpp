#include <iostream>
#include <string>

using namespace std;

const int MAX = 101;

// 문자열의 스왑
void swap_string(char *cpp1, char *cpp2);
void swap_string_cpp(string &s1, string &s2);

int main()
{
    char A[MAX], B[MAX];

    while (true)
    {
        cout << "처음 문자열: ";
        cin.getline(A, MAX);

        if (strcmp(A, "") == 0)
        {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        cout << "두번째 문자열: ";
        cin.getline(B, MAX);

        if (strcmp(B, "") == 0)
        {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        cout << "A: " << (void *)A << endl;
        cout << "B: " << (void *)B << endl;

        swap_string(A, B);

        cout << "swap_string 콜 후" << endl;
        cout << "처음 문자열은 " << A << endl << "두번째 문자열은 " << B << endl << "-----------------------\n"; //"\n"은 endl과 같은 역할을 한다.

        string Astr = A;
        string Bstr = B;

        swap_string_cpp(Astr, Bstr);

        cout << "swap_string_cpp 콜 후" << endl;
        cout << "처음 문자열은 " << Astr << endl << "두번째 문자열은 " << Bstr << endl << "-----------------------\n"; //"\n"은 endl과 같은 역할을 한다.
    }

    return 0;
}

void swap_string(char *cpp1, char *cpp2)
{
    cout << "cpp1: " << (void *)cpp1 << endl;
    cout << "cpp2: " << (void *)cpp2 << endl;

    cout << "&cpp1: " << &cpp1 << endl;
    cout << "&cpp2: " << &cpp2 << endl;

    // //not working version
    // char *tp;
    // tp = cpp1;
    // cpp1 = cpp2;
    // cpp2 = tp;

    // working version
    char tp[MAX];
    strcpy(tp, MAX, cpp1);
    strcpy(cpp1, MAX, cpp2);
    strcpy(cpp2, MAX, tp);
}

void swap_string_cpp(string &s1, string &s2)
{
    string temp = s1;
    s1 = s2;
    s2 = temp;
}