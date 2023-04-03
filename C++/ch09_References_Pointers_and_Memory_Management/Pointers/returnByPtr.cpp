#include <iostream>

using namespace std;

int *larger(int *x, int *y)
{
    if (*x > *y)
        return x;
    else
        return y;
}

int main()
{
    int x = 10;
    int y = 20;

    int z = *larger(&x, &y);
    cout << z << endl;

    int *p = larger(&x, &y);
    cout << *p << endl;

    return 0;
}