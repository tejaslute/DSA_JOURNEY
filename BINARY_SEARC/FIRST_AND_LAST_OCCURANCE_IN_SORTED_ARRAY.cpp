// FIRST_AND p_LAST_OCCURANCE_IN_SORTED_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int firstoccurance(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > array[mid])
        {
            start = mid + 1;
        }
        else if (key < array[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;

    }
    return ans;
}

int secondoccurance(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > array[mid])
        {
            start = mid + 1;
        }
        else if (key < array[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;

    }
    return ans;
}

int main()
{
    int array[8] = { 1,3,4,4,4,5,6,7 };
    cout << "First occcurance : " << firstoccurance(array, 8, 4);
    cout << " \n Second  occcurance : " << secondoccurance(array, 8, 4);
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
