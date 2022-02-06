// MOVE_ZEROS_TO_RIGHT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<vector>
#include <iostream>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }

    }
    void display(vector<int>& nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
    }
};

int main()
{
    vector<int>array;
    int n;
   
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter an element ";
        cin >> n;
        array.push_back(n);
    }
    Solution object;
    object.moveZeroes(array);
    object.display(array);
    return 0;
}

