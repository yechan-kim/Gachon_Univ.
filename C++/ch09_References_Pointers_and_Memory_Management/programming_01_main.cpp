#include "programming_01.h"

int main()
{
    int n1 = 1, n2 = 2, n3 = 3, max = 0;
    pass_by_reference(n1, n2, n3, max);
    cout << max << endl;

    return 0;
}