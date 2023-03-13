#include <stdio.h>

int main()
{
    char sig;

    printf("신호등의 색깔 입력 (R, G, Y): ");
    sig = getchar();
    switch (sig)
    {
    case 'r':
    case 'R':
        printf("정지!\n");
        break;
    case 'g':
    case 'G':
        printf("진행!\n");
        break;
    case 'y':
    case 'Y':
        printf("주의!\n");
        break;
    }

    return 0;
}