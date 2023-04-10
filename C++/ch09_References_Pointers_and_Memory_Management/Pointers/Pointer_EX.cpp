#include <iostream>

using namespace std;

void do_it(int *p);

int main()
{
    int num =10;

    do_it(&num);

    cout << num << endl;

    return 0;
}

void do_it(int *p)
{
    (*p)++;
}