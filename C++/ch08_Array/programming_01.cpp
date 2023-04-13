#include <iostream>

#define SIZE 100

using namespace std;

void print(int arr[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int num[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            num[i][j] = rand() % 101 + 100;
    }

    print(num);

    return 0;
}