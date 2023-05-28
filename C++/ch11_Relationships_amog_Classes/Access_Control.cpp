#include <iostream>
#include <string>
using namespace std;
class AAA
{
private:
	int pri;

protected:
	int pro;

public:
	int pub;

public:
	AAA();
	AAA(int a, int b, int c);
	~AAA();
	// void Print();
};
AAA::AAA()
{
	pri = 0;
	pro = 0;
	pub = 0;
	cout << "AAA 매개변수 없는 생성자 실행중.." << endl;
}
AAA::AAA(int a, int b, int c)
{
	pri = a;
	pro = b;
	pub = c;
	cout << "AAA 매개변수 있는 생성자 실행중.." << endl;
}
AAA::~AAA()
{
	cout << " AAA소멸자 실행중..." << endl;
}
// void AAA::Print(){
//	cout << "AAA::Print() pri: " << pri << " pro: " << pro << " pub: " << pub <<endl;
// }
class BBB : public AAA
{
private:
	int b;
	string name;

public:
	BBB();
	BBB(int bval, string s);
	~BBB();
	void Print();
	void SetData();
};
BBB::BBB()
{
	cout << "BBB 매개변수 없는 생성자 실행중.." << endl;
	b = 0;
	name[0] = '\0';
}
BBB::BBB(int bval, string s)
{
	b = bval;
	name = s;
	cout << "BBB 매개변수있는 생성자 실행중.." << endl;
}
BBB::~BBB()
{
	cout << " BBB소멸자 실행중..." << endl;
}
void BBB::Print()
{
	//	AAA::Print();
	cout << "BBB::Print() b: " << b << " name: " << name << endl;
	cout << "pro: " << pro
		 << " pub: " << pub << endl;
}
void BBB::SetData()
{
	// pri = 5;
	pro = 6;
	pub = 7;
}
int main()
{
	cout << sizeof(AAA) << endl;
	cout << sizeof(BBB) << endl;
	AAA a;
	// a.pri = 0; a.pro = 0;
	a.pub = 100;

	BBB b(100, "Jeffrey");
	cout << sizeof(b) << endl;
	// b.pri = 100; b.pro = 90;
	b.pub = 200;
	b.SetData();
	b.Print();
}