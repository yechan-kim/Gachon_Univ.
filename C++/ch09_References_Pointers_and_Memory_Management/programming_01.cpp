#include "programming_01.h"

 void pass_by_reference(int& num1, int& num2, int& num3, int& max)
{
    max = num1;
    if (max < num2)
        max = num2;
    if (max < num3)
        max = num3;
}