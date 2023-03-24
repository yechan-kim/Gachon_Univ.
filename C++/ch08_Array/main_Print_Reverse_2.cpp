#include <iostream>
using namespace std;
int main()
{
    int A[10] = {0};
    char C[100];
    // int number;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        // cin >> C; //cin >> C reads input up to the first whitespace character (e.g., space, tab, newline
        cin.getline(C, 99);
        if (strcmp(C, "\0") == 0)
        {
            break;
        }
        else
        {
            A[i] = atoi(C);
            // cout << "You entered: " << A[i] << endl;
        }
    }
    for (int i = 9; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}