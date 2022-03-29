// SPLIT_THE_BINARY_STRING.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Split the binary string into substrings with equal number of 0s and 1s
Difficulty Level : Easy
Last Updated : 26 Nov, 2021
Given a binary string str of length N, the task is to find the maximum count of consecutive substrings str can be divided into such that all the substrings are balanced i.e. they have equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then print -1.
Example:


Input: str = “0100110101”
Output: 4
The required substrings are “01”, “0011”, “01” and “01”.
Input: str = “0111100010” 
*/
#include<iostream>
#include<string>
using namespace std;


int binary_string(string s)
{
	int count = 0, zero = 0, one = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
		{
			one++;
		}
		if (s[i] == '0')
		{
			zero++;
		}
		if (zero == one)
		{
			count++;
			zero = 0;
			one = 0;
		}
	}
	if (zero != one)
	{
		return -1;
	}
	return count;
}
int main()
{
	string binary = "0101001101";
	cout<<"Count is : "<< binary_string(binary);
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
