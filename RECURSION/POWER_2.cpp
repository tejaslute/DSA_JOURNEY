// POWER_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int power(int number)
{
    if (number == 0)
    {
        return 1;
    }
    return 2 * power(number - 1);   // eg.2**5 = 2 * 2 * 2 * 2 * 2 = 2 * 2**4 

  /*  int smaller = power(number - 1);
    int bigger = 2 * smaller;
    return bigger;
    */
}
int main()
{
    int number;
    cout << "Enter an number : ";
    cin >> number;
    cout<<"\n2 to  Power of "<< number<<" is : "<<power(number);
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
