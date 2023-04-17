#include <iostream>

using namespace std;

class Array
{
private:
    int capacity;
    int size;
    int *arr;

public:
    void insert(int X);
    void print();
    Array(int capacity, int size, int *arr);
    ~Array();
};