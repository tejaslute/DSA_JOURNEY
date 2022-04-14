// REVERSE_STRING.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void reverse(int start, int end, string& s) // pass by refrense 
{
	if (start > end)
	{
		return;
	}
	swap(s[start], s[end]);
	start++;
	end--;
	reverse(start, end, s);

}
int main()
{
	string s;
	cout << "Enter an string : ";
	cin >> s;
	int start = 0;
	int end = s.length() - 1;
	reverse(start, end, s);
	cout <<"\n Reversed string : " <<s;
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
