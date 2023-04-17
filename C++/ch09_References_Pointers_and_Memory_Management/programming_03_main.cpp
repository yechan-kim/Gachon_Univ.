#include "programming_03.h"

int main()
{
    double num1[2] = {1, 10};
    double num2[2] = {2, 10};
    double result[3] = {0, 0};

    pass_by_reference(num1, num2, result);

    cout << result[0] << "/" << result[1] << endl;

    return 0;
}