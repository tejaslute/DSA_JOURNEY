// only use when range 1-n is given .

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={2,3,5,4,1};
    int i=0;
    while(i<5)
    { 
        if(a[i]!=(a[a[i]-1]))  // check for element having value = index-1
        {
            swap(a[i],a[a[i]-1]);
        }
        else
        {
            i++;
        }
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
