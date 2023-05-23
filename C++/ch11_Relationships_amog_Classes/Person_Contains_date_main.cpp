/***************************************************************
 * Person 클래스를 사용하는 애플리케이션 파일                           *
 ***************************************************************/
#include <iostream>
#include "Person_Contains_date_date.h"
#include "Person_Contains_date_person.h"

using namespace std;

int main()
{
    // 인스턴스화
    Date d1(5, 6, 1980);
    Person p1(111111456, d1);
    Date d2(4, 23, 1978);
    Person p2(345332446, d2);
    Date d3;
    Person p3;
    Date d4(d1);
    Person p4(p1);

    // 출력
    p1.print();
    p2.print();
    p3.print();
    p4.print();

    return 0;
}