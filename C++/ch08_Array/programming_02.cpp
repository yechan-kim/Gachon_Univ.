#include <iostream>

using namespace std;

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
        arr[i] = rand() % 10 + 1;

    int min = arr[0], max = 0;

    for (int i = 0; i < 10; i++)
    {
        if (min > arr[i])
            min = arr[i];
        else if (max < arr[i])
            max = arr[i];
    }

    cout << "min: " << min << ", max: " << max << endl;

    return 0;
}