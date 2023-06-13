#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "Figure.h"

using namespace std;

class Circle : public Figure
{
private:
	int radius;

public:
	Circle();
	Circle(string name, int x, int y, int radius);
	Circle(const Circle& c);
	~Circle();
	void GetArea() const;
	void Draw() const;
};
#endif