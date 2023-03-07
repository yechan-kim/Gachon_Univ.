#include <stdio.h>

double FtoC(double temp_f);

int main()
{
    double f = 32, c = FtoC(f);
    printf("화씨온도 %lf는 섭씨온도 %lf에 해당한다.", f, c);

    return 0;
}

double FtoC(double temp_f)
{
    return ((5.0 * (temp_f - 32.0)) / 9.0);
}