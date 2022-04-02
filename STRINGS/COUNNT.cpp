// COUNNT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

string s(string s2)
{
    int count = 0;
    string s1 = "";
    for (int i = 0; i< s1.length(); i++)
    {
        if (s1[i] == s1[i + 1])
        {
            count++;
        }
        else
        {
            char c = char(count);
            s1.push_back(count);
            s1.push_back(s1[i]);
            count = 0;
        }
    }
    return s1;
}

int main()
{
    string s2 = "aaaaabbbccdd";
    cout <<s(s2);
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
