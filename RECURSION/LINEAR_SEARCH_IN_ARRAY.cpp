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
