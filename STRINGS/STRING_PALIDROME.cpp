// STRING_PALIDROME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

bool filter(char ch)
{
    // Removes an extra symbols n all only keeps alpha and numeric . 
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palidrome(string s)
{
    int  start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (toLowerCase(start) != toLowerCase(end))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    string s;
    string s1="";
    cout << " Enter an name : ";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (filter(s[i]))
        {
            s1.push_back(s[i]);
        }
    }
    for (int j = 0; j < s1.length(); j++)
    {
        toLowerCase(s1[j]);

    }
    if (palidrome(s1))
    {
        cout << " It is palidrome ! 🤑";
    }
    else
    {
        cout << " Its not  palidrome ! ";
    }
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
