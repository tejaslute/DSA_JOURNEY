// LINEAR_SEARCH_IN_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool linearsearch(int array[], int size, int key)
{
	if (size == 0)
	{
		return false;
	}
	if (array[0] == key)
	{
		return true;
	}
	else
	{
		return linearsearch(array + 1, size - 1,key);
	}
}
int main()
{
	int key = 2;
	int array[6] = { 1,2,4,5,7,4 };
	if (linearsearch(array, 6, key))
	{
		cout << "Element found ! ";
	}
	else
	{
		cout << "Elemnt nor found ! ";
	}
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
