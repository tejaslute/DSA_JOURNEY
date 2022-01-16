// SWAP_ALTERNATE_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printarray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " " ;
	}
}
void array_swap(int array[], int size)
{
	for (int i = 0; i < size-1; i += 2)
	{
		swap(array[i], array[i + 1]);
	}
}

int main()
{
	int array[5] = { 1,4,5,4,5 };
	printarray(array, 5);
	cout << "\n Aray after an swapping : ";
	array_swap(array, 5);
	cout << " \n Array after swapping : ";
	printarray(array, 5);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
