#include <iostream>
using namespace std;
int* int_arr_return(int num);
int main() {
	int size;
	cout << "몇 개의 정수를 입력하시겠습니까?:  ";
	cin >> size;
	//int* ip = new int[size];
	int* ip = int_arr_return(size);

	cout << "정수를 입력하시오: ";
	for (int i = 0; i < size; i++)
		cin >> *(ip + i);

	// 평균을 계산하고 출력
	int total = 0;
	for (int i = 0; i < size; i++)
		total += *(ip + i);

	float avg = (float)total / (float)size;
	cout << "total: " << total << ", avg: " << avg << endl;

	cout << "delete전 ip: " << ip << endl;
	cout << "delete전 *ip: " << *ip << endl;

	delete[] ip;
	ip = NULL;

	cout << "delete후 ip: " << ip << endl;
	cout << "delete후 *ip: " << *ip << endl;

	return 0;
}

int* int_arr_return(int num)
{
	int* p = new int[num]; // dynamic memory allocation
	return p;
}