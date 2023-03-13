#include <stdio.h>
#include <math.h>

struct time
{
    int hour, min, sec;
};

int time_to_sec(struct time t)
{
    return t.hour * 3600 + t.min * 60 + t.sec;
}

int main()
{
    struct time t1, t2, t3;

    printf("시작시간(시, 분, 초): ");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
    printf("종료시간(시, 분, 초): ");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    int a1 = time_to_sec(t1);
    int a2 = time_to_sec(t2);
    int a3 = abs(a1 - a2);
    t3.hour = a3 / 3600;
    a3 %= 3600;
    t3.min = a3 / 60;
    t3.sec = a3 % 60;
    printf("\n소요시간 %d : %d : %d", t3.hour, t3.min, t3.sec);

    return 0;
}