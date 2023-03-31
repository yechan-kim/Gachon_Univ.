#include <iostream>
using namespace std;
void printArray(int *B, int size);
int main()
{
	int A[10] = {-999};

	cout << "sizeof(A) = " << sizeof(A) << endl << endl;

	int *p = A;

	/*① 배열명을 사용한 index표현, i로 대입
	  ②  배열명을 사용한 포인터표현, i*i로 대입
	  ③  배열명을 저장한 포인터변수를 사용한 포인터표현, i*i*i로 대입
	  ④  배열명을 저장한 포인터변수를 사용한 index표현, i*i*i*i로 대입*/

	cout << "1. 배열명을 사용한 index표현" << endl;
	for (int i = 0; i < 10; i++)
		A[i] = i;
	printArray(A, 10);

	cout << "2. 배열명을 사용한 포인터 표현" << endl;
	for (int i = 0; i < 10; i++)
		*(A + i) = i * i;
	printArray(A, 10);

	cout << "3. 배열명을 저장한 포인터변수를 사용한 포인터 표현" << endl;
	for (int i = 0; i < 10; i++)
		*(p + i) = i * i * i;
	printArray(A, 10);

	cout << "4. 배열명을 저장한 포인터변수를 사용한 index 표현" << endl;
	for (int i = 0; i < 10; i++)
		p[i] = i * i * i * i ;
	printArray(A, 10);

	return 0;
}

void printArray(int *B, int size)
{
	for (int i = 0; i < size; i++)
		cout << B[i] << " ";
	cout << endl << endl;
}