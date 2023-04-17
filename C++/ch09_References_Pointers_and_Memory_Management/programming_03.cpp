#include "programming_03.h"

void pass_by_reference(double num1[], double num2[], double result[])
{
    result[1] = num1[1] * num2[1];
    result[0] = num1[0] * num2[0];
}