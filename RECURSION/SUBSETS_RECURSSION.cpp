// SUBSETS_RECURSSION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
class Solution {
private:
    void solve(vector<int>output, int index, vector<vector<int>>& ans, vector<int>nums)
    {
        // base case 
        if (index >= nums.size())
        {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(output, index + 1, ans, nums);
        // include
        int element = nums[index];
        output.push_back(element);
        solve(output, index + 1, ans, nums);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        int index = 0;
        solve(output, index, ans, nums);
        return ans;
    }
};