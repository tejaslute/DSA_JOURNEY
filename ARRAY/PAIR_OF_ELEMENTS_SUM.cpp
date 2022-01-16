#include<iostream>
using namespace std;
void display(int array[], int size)
{
	cout << "\n array ";
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout << array[i];
	}
}

int pair_of_element(int array[], int size, int element)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] + array[j] == element)
			{
				cout << "\n Pair of element are " << array[i] << " and " << array[j];
			}
		}
	}

	return -1;
}
int main()
{
	int* array, size,element;
	cout << "Enter an size of array : ";
	cin >> size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\nArray[" << i << "] = ";
		cin >> array[i];
	}
	display(array, size);
	cout << "\nEnter an element which to found sum :  ";
	cin >> element;
	pair_of_element(array, size, element);
	delete []array;
	return 0;
}