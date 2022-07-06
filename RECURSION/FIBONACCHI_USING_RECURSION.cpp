// FIBONACCHI_USING_RECURSION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)  // base case 
    {
        return n;
    }
   
    // recursive call
    
    int ans = fib(n - 2) + fib(n - 1);
  
    return ans;
}
int main()
{
    int numer;
    cout << "Enter an  term : ";
    cin >> numer;
    cout << "/n Term is " << fib(numer);

    // SUM OF FIBONACCHI NUMBER
    int sum = 0;
    for (int i = 0; i < numer; i++)
    {
        sum = sum + fib(i);
    }
    cout << "/n Sum of fiboacchi number is : " << sum;
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
