/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    
    return n* fact(n-1);
}
int main()
{
   int n;
   cout<<"Enter an number to find factorial : ";
   cin>>n;
   cout<<"Factorial of "<<n<<" is " <<fact(n);

    return 0;
}
