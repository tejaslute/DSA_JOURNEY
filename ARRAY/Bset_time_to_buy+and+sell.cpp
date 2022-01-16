// Bset_time_to_buy+and+sell.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max1 = 0;
        int max = 0;

      /* //1st aproach   /*for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                if (prices[j] > prices[i])
                {
                    max1 = prices[j] - prices[i];
                }
                if (max1 > max)
                {
                    max = max1;
                }
            }
        }
        if (max == 0)
        {
            return 0;
        }*/
       /* 2nd approach 
        
        for (int i = 0; i < size; i++)
        {
             max1 = max(array[i + 1] - array[i], array[size - 1]);
        }
        */
        return max1;
    }

};
int main()
{
    std::cout << "Hello World!\n";
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
