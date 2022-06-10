// DOUBLE_POINTER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void update(int** p)
{
	*p = *p + 1;
	**p = **p + 1;
}
int main()
{
	int i = 5;
	int* ptr1 = &i;
	int** ptr2 = &ptr1;   // Pointer topointer 
	cout << " ptr1  address : " << ptr1;
	cout << "\n content of ptr1 : " << *ptr1;
	cout << "\n ptr2 address : " << ptr2;
	cout << "\n Content of ptr2 : " << *ptr2;
	cout << " \n After update : ";
	update(ptr2);
	cout << *ptr2 <<" "<<i;
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
