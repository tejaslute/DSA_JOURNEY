// AARAY_MERGE_UNSORETD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
using namespace std;
void display(int array[], int size)
{
	cout << "\n Array1 = ";
	for (int i = 0; i < size; i++)
	{
		cout << " ";
		cout << array[i];
	}
}

int merge(int array1[], int array2[], int array3[],int  size1,int  size2)
{
	int index = 0;
	cout << "\n Merged array is : ";
	for (int i = 0; i < size1; i++)
	{
		array3[index] = array1[i];
		index++;

	}

	for (int i =0; i < size2; i++)
	{
		array3[index] = array2[i];
		index++;
	}
	return -1;
}
int main()
{
	int size1=5, size2=5, size3;
	int array1[5], array2[5];
	size3 = size1 + size2;
	int array3[10];
	for (int i = 0; i < size1; i++)
	{
		cout << "\n array 1 [" << i << "] = ";
		cin >> array1[i];
	}

	for (int i = 0; i < size2; i++)
	{
		cout << "\n array 2 [" << i << "] = ";
		cin >> array2[i];
	}

	display(array1, size1);
	display(array2, size2);
	merge(array1, array2, array3, size1, size2);
	display(array3, size3);

}
