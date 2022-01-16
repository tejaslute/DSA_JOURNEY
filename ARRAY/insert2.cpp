#include<iostream>
using namespace std;
void display(int arr[], int size)
{
	cout << "\n myArray = ";
	for (int i = 0; i < size; i++)
	{
		cout << " ";
		cout << arr[i];
	}



}
int insert(int arr[], int size)
{
	int element, position;
	cout << "\n Enter an position to insert an element : ";
	cin >> position;
	cout << "\n Enter an element to insert at postion " << position << " : ";
	cin >> element;

	for (int i = size; i > position; i--)
	{
		arr[i] = arr[i - 1];

	}
	arr[position] = element;
	return 1;
}

int main()
{
	int myArray[20], size;
	cout << "Enter an size of an array : ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "\n myArray[" << i << "] = ";
		cin >> myArray[i];

	}
	display(myArray, size);
	size += 1;
	insert(myArray, size);
	display(myArray, size);
}