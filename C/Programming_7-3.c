#include <stdio.h>

int main()
{
    int score[3][3] = {{30, 10, 11}, {40, 90, 32}, {70, 65, 56}}, i;
    float avg[3];

    for (i = 0; i < 3; i++)
        avg[i] = (score[i][0] + score[i][1] + score[i][2]) / 3.0;

    for (i = 0; i < 3; i++)
        printf("%d: %f\n", i, avg[i]);
        
    return 0;
}
