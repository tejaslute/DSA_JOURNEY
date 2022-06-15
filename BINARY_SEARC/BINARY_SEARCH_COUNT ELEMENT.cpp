// BINARY_SARCH_COUNT ELEMENT.cp: This file contains the 'main' function. Program execution begins ad ends ther.
#include<iostream>
using namespace std;
void display(int array[], int size)
{
	cout << "arrray =  " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << " ";
		cout << array[i];
	}
}

int count_element(int array[], int size)
{
	int low = 0, high = 0,count=0, mid, element;
	high = size - 1;
	
	cout << " Enter an element present in array :  ";
	cin >> element;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (array[mid] == element)
		{
		cout << " " << element << " founded " << endl;
		cout << " No of elements less than element is  " << mid ;
		return mid;
		}


		else if  (array[mid] < element)
		{
			low = mid + 1;
			high = size - 1;
			
		}
		else
		{
			high = mid - 1;
			
		}

		
		
	}
	
	return -1;
}
int main()
{
	int* array,size;
	cout << "Enter an size : ";
	cin >> size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "array[" << i << "] =  ";
		cin >> array[i];
	}
	cout << endl;
	display(array, size);
	count_element(array, size);
	return 0;

}
