<<<<<<< HEAD
// 2_D_DYNAMIC_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int row, column;
	cout << "Enter an row and column : \n ";
	cin >> row >> column;
	int** arr = new int*[row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[column];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "\n Printing elemnet ";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout<<arr[i][j];
		}
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
=======
// 2_D_DYNAMIC_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int row, column;
	cout << "Enter an row and column : \n ";
	cin >> row >> column;
	int** arr = new int*[row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[column];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "\n Printing elemnet ";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout<<arr[i][j];
		}
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
>>>>>>> fbac3b89c553bd4f5c8c9b6aa5672c1b3f66f15a
