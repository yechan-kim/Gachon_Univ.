#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << sin(0) << " " << sin(M_PI) << endl;
    cout << cos(0) << " " << cos(M_PI) << endl;
    cout << tan(0) << " " << tan(1) << endl;
    cout << asin(0) << " " << asin(1) << endl;
    cout << acos(0) << " " << acos(1) << endl;
    cout << atan(0) << " " << atan(1) << endl;

    return 0;
}