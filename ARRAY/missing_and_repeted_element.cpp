/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>mp;
    int array[5]={1,2,3,3,5};
    for(int i=0;i<5;i++)
    {
        mp[array[i]]++;
    }
    int sum1=0;
    for(auto i:mp)
    {
        sum1=sum1+i.first;
        if(i.second==2)
        {
            cout<<"repertedd elemnt "<<i.first<<endl;
        }
    }
    
    int sum=5*(5+1)/2;
    cout<<"Missing "<<sum-sum1;

    return 0;
}
