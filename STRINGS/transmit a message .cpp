/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<char,int>mp;
    map <int, int>::iterator it1;
    string s="aabbb";
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    
    
   char c;
   int m;
   for (auto it = mp.begin();
         it != mp.end(); ++it)
        {
            c=it->first;
            m=it->second;
        }
        
string s2[m];
for(int i=0;i<m;i++)
{
    s2[i]=c;
}
for(int i=0;i<m;i++)
{
    cout<<s2[i]<<endl;
}


    return 0;
}
