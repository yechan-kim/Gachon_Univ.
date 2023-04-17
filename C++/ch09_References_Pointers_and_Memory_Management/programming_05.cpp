#include "programming_05.h"

void SortedArray::insert(int X)
{
    if (capacity <= size)
        cout << "배열이 꽉 차서 요소를 추가할 수 없다." << endl;
    else
    {
        arr[size++] = X;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[j + 1])
                    arr[j + 1] = arr[j];
            }
        }
    }
}

void SortedArray::print()
{
    for (int i = 0; i < size; i++)
        cout << arr[i];
    cout << endl;
}

void SortedArray::remove(int X)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == X)
        {
            for (int j = i ; j < size; j++)
                arr[j] = arr[j + 1];
        }
    }
    arr[size--];
}

SortedArray::SortedArray(int capacity, int size, int *arr)
    : capacity(capacity), size(size), arr(arr)
{
    cout << "매개변수가 있는 생정자를 호출했습니다." << endl;
}

SortedArray::~SortedArray()
{
    delete[] arr;
    cout << "소멸자가 호출되었습니다." << endl;
}