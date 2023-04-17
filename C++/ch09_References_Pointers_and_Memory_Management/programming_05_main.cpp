#include "programming_05.h"

int main()
{
    SortedArray a(100, 0, new int[100]);

    for(int i=1; i<11; i++)
        a.insert(i);

    a.remove(7);

    a.print();

    return 0;
}