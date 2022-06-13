/*Longest Common Prefix in an Array
Easy Accuracy : 49.76 % Submissions : 47163 Points : 2
Lamp
This problem is part of GFG SDE Sheet.Click here to view more.
Given a array of N strings, find the longest common prefix among all strings present in the array.


Example 1:

Input:
N = 4
arr[] = { geeksforgeeks, geeks, geek,
         geezer }
Output: gee
Explanation : "gee" is the longest common
prefix in all the given strings.
*/
#include<iostream>
#include<string>
using namespace std;
string longestCommonPrefix(string arr[], int N)
{
    string output = arr[0];
    for (int i = 1; i < N; i++)
    {
        string comparasion = arr[i];
        for (int j = 0; j < output.length(); j++)
        {
            if (output[j] != comparasion[j])
            {
                output = output.substr(0, j);
                break;
            }
        }

    }
    if (output.empty())
    {
        return "-1";
    }
    return output;
}

int main()
{
    string arr[5] = { "hello","hell","helo","hero","helipad" };
    cout<<longestCommonPrefix(arr, 5);

}
