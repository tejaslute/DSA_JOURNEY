// BINARY_SEARCH.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool binarySearch(int array[], int start, int end, int key)
{
	if (start > end)
	{
		return false;
	}

	int mid = (start + end) / 2;
	if (array[mid] == key)
	{
		return true;
	}
	if (array[mid] < key)
	{
		return binarySearch(array, mid + 1, end, key);
	}
	else
	{
		return binarySearch(array, start, end - 1, key);
	}
}
int main()
{
	int array[6] = { 1,2,4,7,9,11 };
	int key;
	cout << "Enter an elemnt to search : ";
	cin >> key;
	int start = 0;
	int end = 5;
	if (binarySearch(array, start, end, key))
	{
		cout << "\n Element found ! ";
	}
	else
	{
		cout << "\n Element not found ! ";
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solutn Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
