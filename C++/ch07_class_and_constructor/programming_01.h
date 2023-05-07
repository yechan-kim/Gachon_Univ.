#ifndef PROGRAMMING_01_H
#define PROGRAMMING_01_H

class One
{
private:
    int x, y; // member data
public:
    int getX() const; // member function
    int getY() const;
    One(int X, int Y);
    ~One();
};
#endif