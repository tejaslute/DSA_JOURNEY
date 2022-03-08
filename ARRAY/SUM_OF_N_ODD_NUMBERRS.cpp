// SUM_OF_N_ODD_NUMBERRS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "ENTER AN  NUMBER \n";
    int number;
    int sum = 0;
    int counter = 0;
    cin >> number;
    while (number >= counter)
    {
        if (counter % 2 == 1)
        {
            sum = sum + counter;
          
        }
        counter++;
        
    }
    cout << "SUM IS : " << sum;
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
