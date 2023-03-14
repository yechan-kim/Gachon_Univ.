#include <stdio.h>

double get_bigger(double n1, double n2);

double n1, n2;

int main()
{
    printf("실수를 입력하시오: ");
    scanf("%lf", &n1);
    printf("실수를 입력하시오: ");
    scanf("%lf", &n2);
    get_bigger(n1, n2);
    return 0;
}

double get_bigger(double n1, double n2)
{
    if(n1>n2)
        printf("더 큰수는 %.6lf입니다.",n1);
    else if(n2>n1)
        printf("더 큰수는 %.6lf입니다.",n2);
    else
        printf("두 수는 같습니다.");
    return 0;
}