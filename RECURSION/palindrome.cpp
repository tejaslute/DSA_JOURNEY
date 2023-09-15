// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(string s , int i ,int n)
{
    if(i>=n/2)
    {
        cout<<"Its paliindrome";
        return true;
    }
    
    if(s[i]!=s[n-i-1])
    {
        cout<<"Not a palindrome ";
        return false;
    }
    
    check(s,i+1,n);
}
int main() {
    // Write C++ code here
    
    string s;
    cin>>s;
    check(s,0,s.length());

    return 0;
}
