#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>
#include "Figure.h"

using namespace std;

class Triangle : public Figure
{
private:
	int base;
	int height;

public:
	Triangle();
	Triangle(string name, int x, int y, int base, int height);
	Triangle(const Triangle& t);
	~Triangle();
	void GetArea() const;
	void Draw() const;
};
#endif