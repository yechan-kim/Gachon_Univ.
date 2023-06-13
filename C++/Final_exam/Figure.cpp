#include <iostream>
#include <string>
#include "Figure.h"

using namespace std;

Figure::Figure()
{
	name = '\0';
	x = 0;
	y = 0;
	cout << "Figure con w/o pars" << endl;
}
Figure::Figure(string name, int x, int y)
{
	this->name = name;
	this->x = x;
	this->y = y;
	cout << "Figure con with pars" << endl;
}
Figure::Figure(const Figure& f)
{
	this->name = f.name;
	this->x = f.x;
	this->y = f.y;
	cout << "Figure copy con" << endl;
}
Figure::~Figure()
{
	cout << "Figure deconstructor" << endl;
}
string Figure::GetName() const
{
	return name;
}
void Figure::GetArea() const
{
	return;
}
void Figure::Draw() const
{
	return;
}