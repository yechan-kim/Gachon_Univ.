#include <iostream> //입출력
#include <cstdlib>  //srand, rand함수
#include <ctime>    //time 함수

using namespace std;

int main()
{
    // 배열 선언
    int CAPACITY = 10;
    int array[10];

    // rand 함수의 시드 변경 (컴파일할 때마다 값이 다르게 나오기 위함)
    srand(time(NULL));

    // 배열 생성
    for (int i = 0; i < CAPACITY; i++)
        array[i] = rand() % 100 + 1;

    // 생성된 배열 출력
    cout << "Original Array" << endl;
    for (int i = 0; i < CAPACITY; i++)
        cout << array[i] << " ";
    cout << endl;

    // min, max 변수 선언 및 초기화
    int min, max;
    min = array[0];
    max = array[0];

    // minmax 알고리즘 실행
    for (int i = 0; i < CAPACITY; i++)
    {
        if (min > array[i])
            min = array[i];
        if (max < array[i])
            max = array[i];
    }

    // // minmax 알고리즘 결괏값 출력
    // cout << "max: " << max << ", min: " << min << endl;

    // min값 배열에서 제거 (배열은 크기가 동적으로 변하기 않기 때문에 CAPACITY를 1 감소해 배열의 가장 뒤에 있는 값은 미사용 -> CAPACITY == 9)
    for (int i = 0; i < CAPACITY; i++)
    {
        if (array[i] == min)
        {
            for (int j = i + 1; j < CAPACITY; j++)
                array[j - 1] = array[j];
            CAPACITY--;
            break;
        }
    }

    // max값 배열에서 제거  (배열은 크기가 동적으로 변하기 않기 때문에 CAPACITY를 1 감소해 배열의 가장 뒤에 있는 값은 미사용 -> CAPACITY == 8)
    for (int i = 0; i < CAPACITY; i++)
    {
        if (array[i] == max)
        {
            for (int j = i + 1; j < CAPACITY; j++)
                array[j - 1] = array[j];
            CAPACITY--;
            break;
        }
    }

    // min값 max값 제거 후 배열 출력
    cout << "Resulting array" << endl;
    for (int i = 0; i < CAPACITY; i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}