#include <iostream>
#include <cstring>

using namespace std;

char *Shift_Right_String(char *arr, int len);

int main()
{
    char orig[] = "BINGO_JJANG!!!";
    int len = strlen(orig);
    cout << orig << endl;

    char *S_arr = Shift_Right_String(orig, len);
    cout << S_arr << endl;

    while (strcmp(S_arr, orig) != 0)
    {
        S_arr = Shift_Right_String(S_arr, len);
        cout << S_arr << endl;
    }

    delete[] S_arr;
    S_arr = NULL;

    return 0;
}

char *Shift_Right_String(char *arr, int len)
{
    char *N_arr = new char[len + 1];
    N_arr[0] = arr[len - 1];

    for (int i = 1; i < len; i++)
        N_arr[i] = arr[i - 1];

    N_arr[len] = NULL;
    return N_arr;
}