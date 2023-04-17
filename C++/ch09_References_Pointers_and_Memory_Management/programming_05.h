#include <iostream>

using namespace std;

class SortedArray
{
private:
    int capacity;
    int size;
    int *arr;

public:
    void insert(int X);
    void print();
    void remove(int X);
    SortedArray(int capacity, int size, int *arr);
    ~SortedArray();
};