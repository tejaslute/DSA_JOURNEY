#include<iostream>;
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

int insert_in_array(int array[], int size)
{
	int element;
	cout << "\n Enter an element to be inserted in myArray : ";
	cin >> element;
	
	int i = size-1;
	size += 1;
	while (array[i]>element)
	{
		array[i + 1] = array[i];
		i--;
	}
	
	array[i + 1] = element;
	return -1;
}

int main()
{
	int* myArray, size;
	cout << "\n Enter an size of an myArray : ";
	cin >> size;
	myArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n myArray[" << i << "] = ";
		cin >> myArray[i];
	}
	display(myArray, size);
	insert_in_array(myArray, size);
	display(myArray, size);
	return 0;
}