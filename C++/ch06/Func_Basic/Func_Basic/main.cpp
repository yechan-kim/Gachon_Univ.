#include <iostream>

using namespace std;

void func(int y, int &z);
void swap_pass_by_value(int i, int j);
void swap_pass_by_reference(int &ri, int &rj);

int main()
{
	int x = 10;
	int a = 5;

	func(x, a);

	cout << "x: " << x << endl;
	cout << "a: " << a << endl;

	int b = 5, c = -500;

	swap_pass_by_value(b, c);

	cout << "in main swap_by_value b: " << b << ", c: " << c << endl;

	swap_pass_by_reference(b, c);

	cout << "in main swap_by_reference b: " << b << ", c: " << c << endl;

	return 0;
}

void func(int y, int &z)
{
	y++;
	z = 5000;
}
void swap_pass_by_value(int i, int j)
{
	int tmp;

	tmp = i;
	i = j;
	j = tmp;

	cout << "swap_by_value i: " << i << ", j: " << j << endl;
}
void swap_pass_by_reference(int &ri, int &rj)
{
	int tmp;

	tmp = ri;
	ri = rj;
	rj = tmp;

	cout << "swap_by_reference ri: " << ri << ", rj: " << rj << endl;
}