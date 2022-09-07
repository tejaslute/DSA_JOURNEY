/AARAY_RIGHT_ROTATION.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

void display(int array[], int size)
{
	cout << "myArray = ";
	for (int i = 0; i < size; i++)
	{

		cout << "\n ";
		cout << array[i];
	}



}
int left_rotation(int array[], int size)
{

	for (int i = size-1; i >0; i--)
	{
		array[i]=array[i-1];

	}
	array[0] = array[size - 1];
	return -1;
}


int main()
{
	int  size,no_of_element;
	cout << "\n Enter size of array : ";
	cin >> size;
	int myArray[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n myArray[" << i << "] = ";
		cin >> myArray[i];
	}
	display(myArray, size);
	cout << "\n How to much shift : ";
	cin >> no_of_element;
	no_of_element = no_of_element % size;
	for (int i = 1; i <= no_of_element; i++)
	{
		left_rotation(myArray, size);
	}
	display(myArray, size);
	
	return 0;

}
