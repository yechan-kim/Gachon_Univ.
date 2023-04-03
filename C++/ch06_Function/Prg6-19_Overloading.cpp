#include <iostream>
using namespace std;
int max(int n1, int n2);
int max(int n1, int n2, int n3);
int max(int n1, int n2, int n3, int n4);
int main()
{
	cout << "maxinum (5, 7): " << max(5, 7) << endl;
	cout << "maxinum (7, 9, 8): " << max(7, 9, 8) << endl;
	cout << "maxinum (14, 3, 12, 11): " << max(14, 3, 12, 11) << endl;
	return 0;
}
int max(int n1, int n2)
{
	int larger;
	if (n1 >= n2)
		larger = n1;
	else
		larger = n2;
	return larger;
}
int max(int n1, int n2, int n3)
{
	int larger;
	larger = max(max(n1, n2), n3);
	return larger;
}
int max(int n1, int n2, int n3, int n4)
{
	int larger;
	larger = max(max(n1, n2, n3), n4);
	return larger;
}