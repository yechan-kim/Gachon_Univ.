#include <iostream>

using namespace std;

int main()
{
    int length, girth;
    double area;

    cout << "정사각형의 변의 길이를 입력하세요.: ";
    cin >> length;

    girth = 4 * length;
    area = pow(length, 2);

    cout << "입력한 변의 길이를 가지는 정사각형의 둘레는 " << girth << "이고, 넓이는 " << area << "이다." << endl;

    return 0;
}