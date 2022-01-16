#include<iostream>
using namespace std;

void display(int array[], int size)
{
	cout << "\n myArray = ";
	for (int i = 0; i < size; i++)
	{
		cout << " ";
		cout << array[i];
	}
}

int sum_of_array(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + array[i];
	}
	cout << "\n Sum of an array is : " << sum;
	return -1;
}

int main()
{
	int size, * array;
	cout << "\n Enter an size of an array : ";
	cin >> size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n array[" << i << "] = ";
		cin >> array[i];
	}
	display(array, size);
	sum_of_array(array, size);
	delete[]array;
	return 0;
}