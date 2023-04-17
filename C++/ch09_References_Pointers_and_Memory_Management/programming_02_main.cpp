#include "programming_02.h"

int main()
{
    double num1[3] = {1, 10, num1[0] / num1[1]};
    double num2[3] = {2, 10, num2[0] / num2[1]};
    double num3[3] = {3, 10, num3[0] / num3[1]};
    double max[3] = {0.1, 0.2, max[0] / max[1]};

    pass_by_reference(num1, num2, num3, max);

    cout << max[0] << "/" << max[1] << endl;

    return 0;
}