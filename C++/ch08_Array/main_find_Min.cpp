#include <iostream>

using namespace std;

int funcMin(int B[], int size);
int funcMin_ptr(int *B, int size);

int main()
{
	int A[5] = {0, 1, 2, 3, 4};
	cout << funcMin(A, 5) << endl;
	return 0;
}
int funcMin(int B[], int size)
{
	int min = B[0];
	for (int i = 0; i < size; i++)
	{
		if (B[i] < min)
			min = B[i];
	}
	return min;
}
int funcMin_ptr(int *B, int size)
{
	int min = B[0]; //* B
	for (int i = 0; i < size; i++)
	{
		if (B[i] < min) // if(*(B+i)<min)
			min = B[i]; // min = *(B+i)
	}
	return min;
}