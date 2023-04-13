#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, sum;

    cout << "4개의 숫자를 입력하세요.: ";
    cin >> num1 >> num2 >> num3 >> num4;

    sum = num1 + num2 + num3 + num4;

    cout << endl << "입력된 숫자의 합은" << sum << "입니다." << endl;

    return 0;
}