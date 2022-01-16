#include<iostream>
using namespace std;

void display(int array[], int size)
{
	cout << " \nmyArray =  ";
	for (int i = 0; i < size; i++)
	{
		cout << " ";
		cout << array[i];
	}
}

int maximum(int array[], int size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	cout << "\n Maximum of myarray is  " << max;
	return -1;
}
int minimum(int array[], int size)
{
	int minimun_element = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < minimun_element)
		{
			minimun_element = array[i];
		}
	}
	cout << "\n Minimum of myarray is  " << minimun_element;
	return 2;
}
int main()
{
	int size;
	int* myArray;
	cout << "\n Enter an size of an array : ";
	cin >> size;
	myArray=new int [size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n array[" << i << "] = ";
		cin >> myArray[i];
	}
	display(myArray, size);
	maximum(myArray, size);
	minimum(myArray, size);
	delete []myArray;


	return 0;
}