#include <iostream>
using namespace std;

void display(int array[], int size)
{
	cout << "\n myArray = ";
	for(int i=0;i<size;i++)
	{

		cout << "\n ";
		cout << array[i];
	}



}
int left_shift(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = array[i + 1];
	}
	array[size - 1] = 0;
	return -1;
}

int main()
{
	int* myArray, size;
	cout << "\n Enter size of array : ";
	cin >> size;
	myArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n myArray[" << i << "] = ";
		cin >> myArray[i];
	}
	display(myArray, size);
	left_shift(myArray, size);
	display(myArray, size);
	delete[]myArray;
	return 0;

}