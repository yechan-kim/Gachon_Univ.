#include "programming_04.h"

void Array::insert(int X)
{
    if (capacity <= size)
        cout << "배열이 꽉 차서 요소를 추가할 수 없다." << endl;
    else
        arr[size++] = X;
}

void Array::print()
{
    for (int i = 0; i < size; i++)
        cout << arr[i];
    cout << endl;
}

Array::Array(int capacity, int size, int *arr)
    : capacity(capacity), size(size), arr(arr)
{
    cout << "매개변수가 있는 생정자를 호출했습니다." << endl;
}

Array::~Array()
{
    delete[] arr;
    cout << "소멸자가 호출되었습니다." << endl;
}