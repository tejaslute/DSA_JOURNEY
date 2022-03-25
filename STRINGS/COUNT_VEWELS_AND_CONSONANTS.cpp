// COUNT_VEWELS_AND_CONSONANTS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;


int main()
{
    string name;
    std::cout << "Enter an string \n";
    getline(cin, name);
    int countv = 0;
    int countc = 0;
    for (int i = 0; i < name.length(); i++) 
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == '0' || name[i] == 'u')
        {
            countv++;
        }

        else if (name[i] >= 65 && name[i] <= 90 || name[i] >= 97 && name[i] <= 122)
        {
            countc++;
        }
    }
    cout << "\n Number of vowels are : " << countv << " numbers of consants are : " << countc;
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
