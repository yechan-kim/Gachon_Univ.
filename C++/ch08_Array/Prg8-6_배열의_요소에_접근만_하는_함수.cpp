/***************************************************************
 * 배열의 이름과 크기를 매개변수로 입력받아서                             *
 * 출력하는 함수를 사용하는 프로그램                                    *
 ***************************************************************/

#include <iostream>

using namespace std;

/***************************************************************
 * print 함수는 매개변수로 배열의 이름과 크기를 입력받고                   *
 * 이를 활용해서 배열의 내용을 출력                                    *
 * 이 함수는 배열 요소를 수정하지 않음                                  *
 ***************************************************************/

void print(const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    return;
}

int main()
{
    // 배열 선언하고 초기화
    int numbers[15] = {5, 7, 9, 11, 13};

    // print 함수 호출
    print(numbers, 5);

    return 0;
}