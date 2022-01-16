
#include<iostream>
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

int sum_of_array(int array[], int size, int sum1)
{
	int sum = 0, difference;
	for (int i = 0; i < size; i++)
	{
		sum = sum + array[i];
	}
	cout << "\n Sum of an array is : " << sum;

	if (sum == sum1)
	{
		cout << "\n no missing element ";
	}
	else
	{
		difference = sum1 - sum;
		cout << "\n missing number is " << difference;
	}



	return -1;
}

int main()
{

	int size, * array, sum, difference, size1;
	cout << "\n Enter an size of an array : ";
	cin >> size;
	cout << "\n Enter an last element  : ";
	cin >> size1;

	sum = (size1 * (size1 + 1) / 2);
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n array[" << i << "] = ";
		cin >> array[i];
	}
	display(array, size);
	sum_of_array(array, size, sum);
	
	delete[]array;
	return 0;

}
