#include <iostream>
using namespace std;
int main()
{
	int A[10] = {0};
	for (int i = 0; i < 10; i++)
	{
		cout << i << " 번째 수: ";
		cin >> A[i];
	}
	for (int i = 9; i >= 0; i--)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}