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
	cout << "\n Enter an position to  insert an element : ";
	cin >> position;
	cout << "\n Enter an element to insert at postion " << position << " : ";
	cin >> element;
	size += 1;

	for (int i = size; i > position; i--)
	{
		arr[i] = arr[i - 1];

	}
	arr[position] = element;
	return 1;
}

int deletion(int arr[], int size)
{
	int position;
	cout << "\n Enter an position t0 delete : ";
	cin >> position;
	size-= 1;
	for (int i = 0; i < size; i++)
	{
		if (i == position)
		{
			arr[i] = arr[i + 1];
		}
	}
	return 2;
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
	size -= 1;
	deletion(myArray, size);
	display(myArray, size);
}
