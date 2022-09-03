// NAIVE_ALGORITHMS.cpp : This file contains the 'main
#include<string>
#include <iostream>
using namespace std;

int main()
{
    string s = "ABSCHSJSNSHJ";
    string pattern = "CHS";
    int n = s.length();
    int m = pattern.length();

    for (int i = 0; i < n - m; i++)
    {
        int j = 0;
        for (j; j < m; j++)
        {
            if (s[i + j] != pattern[j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << "Elemnt found at position " << i;
        }
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
