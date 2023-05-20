#ifndef RECT_CONTAINS_2_POINTS_POINT_H
#define RECT_CONTAINS_2_POINTS_POINT_H

class Point
{
public:
    Point();
    Point(int initialX, int initialY);
    Point(const Point &pt);
    ~Point();
    void SetX(int value);
    void SetY(int value);
    int GetX() const;
    int GetY() const;
    void Print() const;

private:
    int x, y;
};

#endif