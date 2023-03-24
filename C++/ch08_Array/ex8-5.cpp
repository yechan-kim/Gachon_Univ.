#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

// Declaration of four functions
void print(int arr[], int size);
int findIndexSmallest(const int arr[], int size);
int findIndexLargest(const int arr[], int size);
int remove(int arr1[], int size, int index);

int main()
{
	// Declaration of size and the array
	
	int arr[10] = { 0 };// = { 12,  51,  72,  98,  17,  44,  47,   7,  61,   3 };
	int size = 10;
	// Filling array with 10 random integers	
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (100) + 1;
	}
	// Printing the original array
	cout << "  Original Array:" << endl;
	print(arr, size);
	cout << endl << endl;
	// Find the smallest element and remove it
	int smallestIndex = findIndexSmallest(arr, size);
	size = remove(arr, size, smallestIndex);
	// Find the largest element and remove it
	int largestIndex = findIndexLargest(arr, size);
	size = remove(arr, size, largestIndex);
	// Printing array after removing the largest and smallest 	
	cout << "  Resulting array:" << endl;
	print(arr, size);
	return 0;
}

// Definition of print function
void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//cout << setw(4) << arr[i];
		cout << arr[i] << "  ";
	}
}
// Definition of function returning the index of smallest element
int findIndexSmallest(const int arr[], int size)
{
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[index])
		{
			index = i;
		}
	}
	return index;
}
// Definition of function returning the index of largest element
int findIndexLargest(const int arr[], int size)
{
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > arr[index])
		{
			index = i;
		}
	}
	return index;
}
// Definition of function that remove an element given index
int remove(int arr[], int size, int index)
{
	for (int i = index; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;
	return size;
}
