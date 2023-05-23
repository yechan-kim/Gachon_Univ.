#include <iostream>
#include "Rect_contains_2_Points_rect.h"
#include "Rect_contains_2_Points_point.h"

using namespace std;

int main()
{
    cout << "포인트 두개 만들기 " << endl;
    Point p1(10, 20);
    Point p2(30, 40);

    cout << "r1 객체만들기시작..." << endl;
    Rect r1(p1, p2);
    r1.Print();

    cout << "r2 객체만들기시작..." << endl;
    Rect r2(100, 200, 300, 400);
    r2.Print();
    
    cout << "r3 객체만들기시작..." << endl;
    Rect r3;
    r3.Print();

    cout << "r4 객체만들기시작..." << endl;
    Rect r4(r1);
    r4.Print();

    cout << "포인트 두개 만들기 " << endl;
    Point p3(p2);
    Point p4(p1);

    cout << "r5 객체만들기시작..." << endl;
    Rect r5(p3, p4);
    r5.Print();

    return 0;
}
