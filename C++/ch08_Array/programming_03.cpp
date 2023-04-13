#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int arr[10], sum = 0;
    double avg, s_dev, var, dev = 0.0;

    for (int i = 0; i < 10; i++)
        arr[i] = rand() % 100 + 1;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;

    avg = (double)sum / double(10);
    cout << "average: " << avg << endl;

    for (int i = 0; i < 10; i++)
        dev += pow(arr[i] - avg, 2);
    var = sqrt(dev);
    s_dev = var / 10.0;
    cout << "s_dev: " << s_dev << endl;

    return 0;
}