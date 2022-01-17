// FIND_PIVOT_INDEX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int pivotIndex(int nums[],int size) {
        int sum = 0;
        int left_sum = 0;
        int right_sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum = sum + nums[i];
        }

        right_sum = sum;
        for (int i = 0; i <size; i++)
        {
            right_sum = right_sum - nums[i];
            if (left_sum == right_sum)
            {
                return i;
            }
            left_sum = left_sum + nums[i];
        }
        return -1;
    }
};

int main()
{
    int nums[7] = { 1,2,3,6,3,2,1 };
    Solution s;
    cout<<s.pivotIndex(nums, 7);
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
