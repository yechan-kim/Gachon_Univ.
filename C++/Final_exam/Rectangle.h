#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "Figure.h"

using namespace std;

class Rectangle : public Figure
{
private:
	int width;
	int height;

public:
	Rectangle();
	Rectangle(string name, int x, int y, int width, int height);
	Rectangle(const Rectangle& r);
	~Rectangle();
	void GetArea() const;
	void Draw() const;
};
#endif