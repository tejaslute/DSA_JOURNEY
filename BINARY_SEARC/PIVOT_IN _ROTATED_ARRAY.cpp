// PIVOT_IN _ROTATED_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {

        //For fast I/O in C++
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int mid;
        
        //Iterative binary search
        while(left<=right)
        {
            mid = (left+right)/2;
            //cout<<nums[mid]<<"\n";
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>=nums[left])
            {
                if(target<=nums[mid] && target>=nums[left])
                    right = mid-1;
                else
                    left = mid+1;
            }
            else
            {
                if(target>=nums[mid] && target<=nums[right])
                    left = mid+1;
                else
                    right = mid-1;
            }
        }
        return -1;
    }
};

   

int main()
{
    vector <int> array = { 7,8,1,2,3 };
    Solution s;
    cout << "search : " << s.search(array, 1);
  
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
