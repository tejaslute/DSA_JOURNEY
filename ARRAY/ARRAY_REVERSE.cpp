#include <iostream>
using namespace std;

void display(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " ";
		cout << array[i];
	}
}
int reverse(int array[], int size)
{
	cout << "\n Reverse of an array is :";
	int end=size-1, start=0, temp;
	while (start < end)
	{
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
	return -1;
}
int main()
{
	int* myArray, size;
	cout << "\n Enter an size of an myArray :  ";
	cin >> size;
	myArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n myArray [" << i << "] = ";
		cin >> myArray[i];
	}
	display(myArray, size);
	reverse(myArray, size);
	display(myArray, size);
	delete[]myArray;
	return 0;
}
