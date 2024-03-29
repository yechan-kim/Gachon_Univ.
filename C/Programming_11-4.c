#include <stdio.h>

struct student
{
    union number
    {
        int id;
        int stu_id;
    };
    char name[11], phone[14];
};

int main()
{
    struct student stu[10] = {
        {011212313131, "홍길동", "010-1234-5678"},
        {202035101, "홍길동A", "010-9101-1121"},
        {011213313131, "홍길동B", "010-3141-5161"},
        {202035102, "홍길동C", "010-7181-9202"},
        {011214313131, "홍길동D", "010-1222-3242"},
        {202035103, "홍길동E", "010-5262-7282"},
        {011215313131, "홍길동F", "010-9303-1323"},
        {202035104, "홍길동G", "010-3343-5363"},
        {011216313131, "홍길동H", "010-7383-9404"},
        {202035105, "홍길동I", "010-1424-3444"},
    };
    stu[1].id = 011212323232;

    for (int i = 0; i < 10; i++)
        printf("학번 또는 주민등록번호: %d\n이름: %s\n전화번호: %s\n", stu[i].id, stu[i].name, stu[i].phone);

    return 0;
}