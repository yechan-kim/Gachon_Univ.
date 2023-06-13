#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

void printMenu();
void AddCircle(Figure** F, int& CurrentIndex, int point[]);
void AddRect(Figure** F, int& CurrentIndex, int point[]);
void AddTriangle(Figure** F, int& CurrentIndex, int point[]);
void DrawAll(Figure** F, int CurrentIndex);
void GetAllArea(Figure** F, int CurrentIndex);
void ShowPoint(Figure** F, int CurrentIndex, int point[]);
void CleanUp(Figure** F, int CurrentIndex);
enum
{
	ADDCIRCLE = 1,
	ADDRECT,
	ADDTRIANGLE,
	DRAWALL,
	GETALLAREA,
	SHOWPOINT,
	EXIT
};

const int MAX = 100;

int main()
{
	Figure* F[MAX];
	static int point[3]; // 0=>Rectangle, 1=>Circle, 2=>Triangle
	int index = 0;
	int choice;
	while (true)
	{
		printMenu();
		cout << "선택: ";
		cin >> choice;
		switch (choice)
		{
		case ADDCIRCLE:
			AddCircle(F, index, point);
			break;
		case ADDRECT:
			AddRect(F, index, point);
			break;
		case ADDTRIANGLE:
			AddTriangle(F, index, point);
			break;
		case DRAWALL:
			DrawAll(F, index);
			break;
		case GETALLAREA:
			GetAllArea(F, index);
			break;
		case SHOWPOINT:
			ShowPoint(F, index, point);
			break;
		case EXIT:
			CleanUp(F, index);
			return 0;
		default:
			cout << "올바르지 않은 선택을 하였습니다." << endl;
			break;
		}
	}
	return 0;
}

void printMenu()
{
	cout << "------------메뉴------------" << endl;
	cout << "1. Circle 추가" << endl;
	cout << "2. Rect 추가" << endl;
	cout << "3. Triangle 추가" << endl;
	cout << "4. 전체 그리기" << endl;
	cout << "5. 전체 면적 구하기" << endl;
	cout << "6. 적립된 포인트보기" << endl;
	cout << "7. 종료" << endl;
}

void AddCircle(Figure** F, int& CurrentIndex, int point[])
{
	int x, y;
	string name;
	int radius;
	if (CurrentIndex < MAX)
	{
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		cout << "name: ";
		cin >> name;
		cout << "radius: ";
		cin >> radius;
		F[CurrentIndex] = new Circle(name, x, y, radius);
		CurrentIndex++;
		point[1] += 10;
	}
	else
		cout << "Figure is full(max: 100)" << endl;
}
void AddRect(Figure** F, int& CurrentIndex, int point[])
{
	int x, y;
	string name;
	int width, height;
	if (CurrentIndex < MAX)
	{
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		cout << "name: ";
		cin >> name;
		cout << "width: ";
		cin >> width;
		cout << "height: ";
		cin >> height;
		F[CurrentIndex] = new Rectangle(name, x, y, width, height);
		CurrentIndex++;
	}
	else
		cout << "Figure is full(max: 100)" << endl;
	point[0] += 20;
}
void AddTriangle(Figure** F, int& CurrentIndex, int point[])
{
	int x, y;
	string name;
	int base, height;
	if (CurrentIndex < MAX)
	{
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		cout << "name: ";
		cin >> name;
		cout << "base: ";
		cin >> base;
		cout << "height: ";
		cin >> height;
		F[CurrentIndex] = new Triangle(name, x, y, base, height);
		CurrentIndex++;
		point[2] += 30;
	}
	else
		cout << "Figure is full(max: 100)" << endl;
}
void DrawAll(Figure** F, int CurrentIndex)
{
	for (int i = 0; i < CurrentIndex; i++)
		(*(F + i))->Draw();
}
void GetAllArea(Figure** F, int CurrentIndex)
{
	for (int i = 0; i < CurrentIndex; i++)
		(*(F + i))->GetArea();
}
void ShowPoint(Figure** F, int CurrentIndex, int point[])
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += point[i];
	cout << "전체 POINTS 점수 : " << sum << endl;
	cout << "전체 Rectangle객체의 POINTS 점수 : " << point[0] << endl;
	cout << "전체 Circle객체의 POINTS 점수 : " << point[1] << endl;
	cout << "전체 Triangle객체의 POINTS 점수 : " << point[2] << endl;
}
void CleanUp(Figure** F, int CurrentIndex)
{
	for (int i = 0; i < CurrentIndex; i++)
	{
		delete F[i];
		F[i] = NULL;
	}
}