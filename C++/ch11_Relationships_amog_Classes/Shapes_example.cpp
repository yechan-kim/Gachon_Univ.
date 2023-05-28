#include <iostream>
using namespace std;

// �Ϲ����� '����'�� ��¡�ϴ� Ŭ����
class Shape
{
public:
	void Move(double x, double y);
	virtual void Draw();
	Shape();
	Shape(double x, double y);
	virtual ~Shape() //�ݵ�� virtual. ������ base�� �Ҹ��ڸ������
	{
		cout << "Shape �Ҹ��ڽ�����" << endl;
	};

protected:
	double _x, _y;
};

Shape::Shape()
{
	_x = _y = 0.0;
}

Shape::Shape(double x, double y)
{
	_x = x;
	_y = y;
}

void Shape::Move(double x, double y)
{
	_x = x;
	_y = y;
}

void Shape::Draw() 
{
	cout << "[Shape] Position = ( " << _x << ", " << _y << ")\n";
}

// �簢���� ��¡�ϴ� Ŭ����
class Rectangle : public Shape
{
public:
	void Draw() ;
	void Resize(double width, double height);

	Rectangle();
	Rectangle(double x, double y, double width, double height);
	~Rectangle()
	{
		cout  << "Rect �Ҹ��� ������.." << endl;
	}
protected:
	double _width;
	double _height;

};

Rectangle::Rectangle()
	:Shape()
{
	_width = _height = 100.0f;
}

Rectangle::Rectangle(double x, double y, double width, double height)
: Shape(x, y)
{
	Resize( width, height);
}

void Rectangle::Draw()
{
	cout << "[Rectangle] Position = ( " << _x << ", " << _y << ") "
		"Size = ( " << _width << ", " << _height << ")\n";
}

void Rectangle::Resize(double width, double height)
{
	_width = width;
	_height = height;
}

// ���� ��¡�ϴ� Ŭ����
class Circle : public Shape
{
public:
	void Draw();
	void SetRadius(double radius);

	Circle();
	Circle(double x, double y, double radius);
	~Circle()
	{
		cout << "Circle �Ҹ��� ������.." << endl;
	}

protected:
	double _radius;
};

Circle::Circle()
	:Shape()
{
	_radius = 100.0f;
}

Circle::Circle(double x, double y, double radius)
: Shape(x, y)
{
	SetRadius( radius);
}

void Circle::Draw()
{
	cout << "[Circle] Position = ( " << _x << ", " << _y << ") "
		"Radius = " << _radius << "\n";
}

void Circle::SetRadius(double radius)
{
	_radius = radius;
}

void MoveToOrigin( Shape* p )
{
	p->Move( 0, 0 );
	p->Draw();
}

int main()
{
	cout << "sizeof(Shape) : " << sizeof(Shape) << endl;
	Shape s;
	s.Draw();
	Circle c(100, 50, 10);
	c.Draw();
	Rectangle r(10, 20, 100, 200);
	r.Draw();
	//MoveToOrigin(&c);
	//c.Draw();
	//MoveToOrigin(&r);
	//r.Draw();
	
	// �������� ���� �迭�� �غ��Ѵ�
	Shape* shapes[5] = {NULL}; //��ü������ �迭

	// �� Ÿ���� ��ü�� �����ؼ� �迭�� �����Ѵ�.
	shapes[0] = new Circle( 100, 100, 50);
	shapes[1] = new Rectangle( 300, 300, 100, 100);
	shapes[2] = new Rectangle( 200, 100, 50, 150);
	shapes[3] = new Circle(100, 300, 150);
	shapes[4] = new Rectangle( 200, 200, 200, 200);

	// �迭�� ������ ��� ��ü��  �׸���.
	for (int i = 0; i < 5; ++i)
		shapes[i]->Draw();

	// �迭�� ������ ��� ��ü�� �Ҹ��Ų��.
	for (int i = 0; i < 5; ++i)
	{
		delete shapes[i];
		shapes[i] = NULL;
	}



	return 0;
}

