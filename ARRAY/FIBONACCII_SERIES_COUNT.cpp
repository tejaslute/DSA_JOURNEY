/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n,number;
    cout<<"Enter an number : ";
    cin>>n;
    cout<<endl;
    
    int count;
    cout<<" Enter an count : ";
    cin>>count;
    cout<<endl;
    
    int a=0;
    int b=1;
    int nextterm ;
    for(int i=0;i<n;i++)
    {
        nextterm=a+b;
        a=b;
        b=nextterm;
        cout<<nextterm<<endl;
        number++;
        if(number==6)
        {
            cout<<a;
            break;
        }
    }

    return 0;
}
