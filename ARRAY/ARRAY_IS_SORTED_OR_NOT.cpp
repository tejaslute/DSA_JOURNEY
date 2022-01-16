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

int myArray_is_sorted_checking(int array[], int size)
{
	int i = 0;
	while (array[i] < array[i + 1] && i < size - 1)
	{
		i++;

	}
	if (i == size - 1)
	{
		cout << "\nmyArray is sorted in accending order !";
	}
	else
	{
		cout << "\n myArray is not sorted ! ";
	}
	return -1;
}
// second method to check array is sorted ! 
int check(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			return -1;
		}
	}
	cout << "myArray is sorted ";
	return -2;
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
	myArray_is_sorted_checking(myArray, size);
	check(myArray, size);
	return 0;
}