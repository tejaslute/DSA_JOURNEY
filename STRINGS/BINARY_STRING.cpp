/* 
Binary String 
Basic Accuracy: 51.59% Submissions: 24698 Points: 1
Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

Example 1:

Input:
N = 4
S = 1111
Output: 6
Explanation: There are 6 substrings from
the given string. They are 11, 11, 11,
111, 111, 1111. */

              class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
            count++;
        }
    }
    return count*(count-1)/2;
        
    }

};
