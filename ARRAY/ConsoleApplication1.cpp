/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
bool isPrime(int n)
{

    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int discountAMT(int orderValue)
{
    int answer = 0;
    while (orderValue > 0)
    {
        int num = orderValue % 10;
        if (isPrime(num))
        {
            answer = answer + num;
        }


        orderValue = orderValue / 10;

    }

    return answer;
}


int main()
{

    cout << discountAMT(111);

    return 0;
}