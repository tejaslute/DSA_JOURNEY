// CYCLIC_RPTATE_MWTHOD_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
        }
        nums = temp;

    }
    void display(vector<int>& array)
    {
        for (int i = 0; i < array.size(); i++) {
            cout << array[i] << " ";
        }
    }
};

int main()
{
    vector<int>array;
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(12);
    array.push_back(354);
    int k;
    cout << " How many to shift : ";
    cin >> k;
    Solution object;
    object.rotate(array,k);
    object.display(array);
    return 0;
}

