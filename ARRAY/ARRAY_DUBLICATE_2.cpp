// ARRAY_DUBLICATE_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
int  dublicate(vector<int>& array)
{
    int ans = 0;
   
    for (int i = 0; i < array.size(); i++)
    {
        ans = ans ^ array[i];
    }
    for (int i = 1; i < array.size(); i++)
    {
        ans = ans ^ i;
    }
    
    return ans;
}



int main()
{
    vector<int>array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);
    array.push_back(1);
    cout << dublicate(array);
  
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
