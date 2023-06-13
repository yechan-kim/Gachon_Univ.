#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"

using namespace std;

Triangle::Triangle()
	: Figure()
{
	base = 0;
	height = 0;
	cout << "Triangle con w/o pars" << endl;
}
Triangle::Triangle(string name, int x, int y, int base, int height)
	: Figure(name, x, y)
{
	this->base = base;
	this->height = height;
	cout << "Triangle con with pars" << endl;
}
Triangle::Triangle(const Triangle& t)
	: Figure(t)
{
	this->base = t.base;
	this->height = t.height;
	cout << "Triangle copy con" << endl;
}
Triangle::~Triangle()
{
	cout << "Triangle deconstructor" << endl;
}
void Triangle::GetArea() const
{
	cout << "Tri면적[" << name << "]: " << base * height / 2.0 << endl;
}
void Triangle::Draw() const
{
	cout << "Tri [name: " << name << "][x:" << x << "][y:" << y << "][base:" << base << "][height:" << height << "]" << endl;
}