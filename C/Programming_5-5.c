#include <stdio.h>

int ceil(float n)
{
    int retval = (int)n;
    if (n - retval > 0)
        retval++;
    return retval;
}

int main()
{
    int x, tax;
    printf("과세표준을 입력하시오(만원): ");
    scanf("%d", &x);
    switch ((int)(ceil((float)x / 1000)))
    {
    default:
        tax += (x - 8000) * 0.35;
        x = 8000;
    case 8:
    case 7:
    case 6:
    case 5:
        tax += (x - 4000) * 0.26;
        x = 4000;
    case 4:
    case 3:
    case 2:
        tax += (x - 1000) * 0.17;
        x = 1000;
    case 1:
    case 0:
        tax += (x * 0.08);
    }

    printf("소득세는 %d만원입니다", tax);

    return 0;
}