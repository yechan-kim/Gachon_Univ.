#include <stdio.h>

struct employee
{
    int id;
    char name[11], phone[14];
    int age;
};

int main()
{
    struct employee emp[10] = {
        {1, "홍길동", "010-1234-5678", 20},
        {2, "홍길동A", "010-9101-1121", 25},
        {3, "홍길동B", "010-3141-5161", 30},
        {4, "홍길동C", "010-7181-9202", 35},
        {5, "홍길동D", "010-1222-3242", 40},
        {6, "홍길동E", "010-5262-7282", 45},
        {7, "홍길동F", "010-9303-1323", 50},
        {8, "홍길동G", "010-3343-5363", 55},
        {9, "홍길동H", "010-7383-9404", 60},
        {10, "홍길동I", "010-1424-3444", 65},
    };

    for (int i = 0; i < 10; i++)
    {
        if (emp[i].age >= 20 && emp[i].age <= 30)
            printf("%s\n", emp[i].name);
    }

    return 0;
}