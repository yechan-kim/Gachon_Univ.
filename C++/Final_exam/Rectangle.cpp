#include <iostream>
#include <string>
#include "Figure.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
	: Figure()
{
	width = 0;
	height = 0;
	cout << "Rectangle con w/o pars" << endl;
}
Rectangle::Rectangle(string name, int x, int y, int width, int height)
	: Figure(name, x, y)
{
	this->width = width;
	this->height = height;
	cout << "Rectangle con with pars" << endl;
}
Rectangle::Rectangle(const Rectangle& r)
	: Figure(r)
{
	this->width = r.width;
	this->height = r.height;
	cout << "Rectangle copy con" << endl;
}
Rectangle::~Rectangle()
{
	cout << "Rectangle deconstructor" << endl;
}
void Rectangle::GetArea() const
{
	cout << "Rectangle면적[" << name << "]: " << width * height << endl;
}
void Rectangle::Draw() const
{
	cout << "Rectangle [name: " << name << "][x:" << x << "][y:" << y << "][width:" << width << "][height:" << height << "]" << endl;
}