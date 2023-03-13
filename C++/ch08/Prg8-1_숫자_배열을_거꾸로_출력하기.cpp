#include <iostream>
using namespace std;

int main()
{
    // 선언
    const int CAPACITY = 10;
    int numbers[CAPACITY];
    int size;

    // 사용자로부터 크기를 입력받고 유효성 검사
    do
    {
        cout << "크기를 입력해주세요(1~10): ";
        cin >> size;
    } while (size < 1 || size > CAPACITY);

    // 정수 입력 받기
    cout << size << "개의 숫자를 입력해주세요: ";
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    // 입력된 정수들을 거꾸로 출력
    cout << "입력한 숫자들을 거꾸로 출력: ";
    for (int i = size - 1; i >= 0; i--)
        cout << numbers[i] << " ";

    return 0;
}