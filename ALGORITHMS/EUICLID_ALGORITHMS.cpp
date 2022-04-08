// EUICLID_ALGORITHMS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
}
int main()
{
    cout << " Enter two numbers : ";
    int a, b;
    cin >> a >> b;
   int x= gcd(a, b);
   cout << "GCD of " << a << " and " << b << " is " << x;
   return 0;
}
