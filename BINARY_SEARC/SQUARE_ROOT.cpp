// SQUARE_ROOT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Solution {
public:
    long long int binarySearch(int target)
    {
        int s = 0;
        int e = target;
        long long  int mid = (s + e) / 2;

        long long int ans = -1;

        while (s <= e)
        {
            long long int square = mid * mid;

            if (square == target)
            {
                return mid;
            }

            if (square < target)
            {
                ans = mid;
                s = mid + 1;

            }
            else
            {
                e = mid - 1;
            }
            mid = (s + e) / 2;
        }
        return ans;
    }



    int mySqrt(int x) {
        return binarySearch(x);
    }
};

int main()
{
    int s1 = 5;
    Solution s;
    cout << " Square root " << s.mySqrt(s1);
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
