/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int array[3]={1,2,3};
    
    for(int i=0;i<8;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            if(i & 1<<j)
            {
                sum=sum+array[j];
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
