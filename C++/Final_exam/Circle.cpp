#include <iostream>
#include <string>
#include "Figure.h"
#include "Circle.h"

using namespace std;

Circle::Circle()
	: Figure()
{
	radius = 0;
	cout << "Circle con w/o pars" << endl;
}
Circle::Circle(string name, int x, int y, int radius)
	:Figure(name, x, y)
{
	this->radius = radius;
	cout << "Circle con with pars" << endl;
}
Circle::Circle(const Circle& c)
	: Figure(c)
{
	this->radius = c.radius;
	cout << "Circle copy con" << endl;
}
Circle::~Circle()
{
	cout << "Circle deconstructor" << endl;
}
void Circle::GetArea() const
{
	cout << "Circle면적[" << name << "]: " << radius * radius * 3.14 << endl;
}
void Circle::Draw() const
{
	cout << "Circle [name: " << name << "][x:" << x << "][y:" << y << "][radius:" << radius << "]" << endl;
}