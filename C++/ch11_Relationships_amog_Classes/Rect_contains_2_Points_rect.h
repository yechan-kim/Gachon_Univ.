#ifndef RECT_CONTAINS_2_POINTS_RECT_H
#define RECT_CONTAINS_2_POINTS_RECT_H
#include "Rect_contains_2_Points_point.h"

class Rect
{
public:
    // 생성자
    Rect();
    Rect(const Point &TL, const Point &BR);
    Rect(int a, int b, int c, int d);
    Rect(const Rect& r);
    ~Rect();
    void Print() const;

private:
    Point topLeft;
    Point bottomRight;
};

#endif