#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
input : 31
output : three one 
*/
int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
     int n;
     cin>>n;
     vector<string>v;
     while(n>0)
     {
        int rem=n%10;
        v.push_back(arr[rem]);
        n=n/10;
     }
     reverse(v.begin(),v.end());
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }
    return 0;
}
