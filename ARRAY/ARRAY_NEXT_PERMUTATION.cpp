// ARRAY_OF_NEXT_PERMUTATION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int idx = -1;

        for (int i = nums.size(); i >= 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                idx = i;
            }
        }
        if (idx == -1)
        {
            reverse(nums.begin(), nums.end());
        }


        else {
            int greater_than_idx = idx;

            for (int i = idx + 1; i < nums.size(); i++)
            {
                if (nums[idx] > nums[idx - 1] && nums[greater_than_idx >= nums[idx]])
                {
                    greater_than_idx = i;
                }
            }
            swap(nums[idx - 1], nums[greater_than_idx]);
            reverse(nums.begin() + idx, nums.end());
        }

    }

    void display(vector<int>& v)
    {
        cout << v[i] << endl;
    }
};
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    Solution s;
    s.nextPermutation(v);
   cout<<s.display(v);
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
