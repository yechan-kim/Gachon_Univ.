#ifndef FIGURE_H
#define FIGURE_H

#include <string>

using namespace std;

class Figure
{
protected:
	string name;
	int x, y;

public:
	Figure();
	Figure(string name, int x, int y);
	Figure(const Figure& f);
	virtual ~Figure();
	virtual string GetName() const;
	virtual void GetArea() const;
	virtual void Draw() const;
};
#endif