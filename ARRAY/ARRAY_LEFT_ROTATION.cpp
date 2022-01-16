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
int left_rotation(int array[], int size, int no_of_element)
{

	for (int i = 0; i < size; i++)
	{
		array[i] = array[i + 1];

	}
	array[size - 1] = array[0];
	return -1;
}


int main()
{
	int  size, no_of_element;
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
		left_rotation(myArray, size, no_of_element);
	}
	display(myArray, size);

	return 0;

}