Time complexity = O(n) 
space complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[5]={2,6,3,5,6};
    unordered_map<int,int>mp;
    for(int i=0;i<5;i++)
    {
        mp[array[i]]++;
        
        if(mp[array[i]]>1)
        {
            cout<<array[i]<<" is 1st occurance  number "<<endl;
            break;
        }
    }
    return 0;
}
