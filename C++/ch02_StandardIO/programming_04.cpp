#include <iostream>

using namespace std;

int main()
{
    int hour, minute, second, time;

    cout << "시간, 분, 초를 순서대로 입력하세요: ";
    cin >> hour >> minute >> second;

    time = hour * 3600 + minute * 60 + second;

    cout << endl << "입력된 시간은" << time << "초 입니다." << endl;

    return 0;
}