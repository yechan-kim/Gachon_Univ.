#include "programming_02.h"

void pass_by_reference(double num1[], double num2[], double num3[], double max[])
{
    max[0] = num1[0];
    max[1] = num1[1];
    max[2] = num1[2];
    if (num2[2] > max[2])
    {
        max[0] = num2[0];
        max[1] = num2[1];
        max[2] = num2[2];
    }
    if (num3[2] > max[2])
    {
        max[0] = num3[0];
        max[1] = num3[1];
        max[2] = num3[2];
    }
}