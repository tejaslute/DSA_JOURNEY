// POWER_FUMCTION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
int power(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	if (b == 1)
	{
		return a;
	}
	// recursive call 

	int ans = power(a, b / 2);

	if (b % 2 == 0)
	{
		return ans * ans;
	}
	else
	{
		return a * ans * ans;
	}
}
using namespace std;
int main()
{
	int a;
	int b;
	cout << "Enter an number an power to number : ";
	cin >> a >> setw(5) >> b;
	int ans = power(a, b);
	cout << "\n POWER OF GIVEN IS " << ans;
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
