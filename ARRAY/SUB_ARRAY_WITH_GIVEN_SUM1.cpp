/*Subarray with given sum 
Easy Accuracy: 39.71% Submissions: 100k+ Points: 2
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

In case of multiple subarrays, return the subarray which comes first on moving from left to right.

 

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.*/

vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>vt;
        int i=0,j=0;
        long long sum=0;
        vector<int> ans;
        while(true)
        {
            if(sum<s)
            {
                sum+=arr[i];
                i++;
            }
            if(sum>s)
            {
                sum-=arr[j];
                j++;
            }
            if(sum==s)
            {
                ans.push_back(j+1);
                ans.push_back(i);
                return ans;
            }
            if(i>n)
            {
                ans.push_back(-1);
                return ans;
            }
        }
