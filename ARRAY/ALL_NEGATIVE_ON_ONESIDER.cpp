// ALL_NEGATIVE_ONESID ER.cpp : his file contains the 'main'      function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void display(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

void change(int array[], int size)
{
	int start = 0;
	int end = size - 1;
	while (start < end)
	{
		if (array[start] > 0)
		{
			swap(array[start], array[end]);
			end--;
		}
		if (array[end]<0)
		{
			swap(array[start], array[end]);
			start++;
		}
		else
		{
			start++;
			end--;
		}
	}
}

int main()
{
	int array[6] = { 2,4,-2,-7,5,-8 };
	display(array, 6);
	cout << " /n After an inserin ";
	change(array, 6);
	display(array, 6);
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
