// Find_elements _that_apper_nk_times.cpp : This file contains the 'main' function. Program execution begins and ends there.
//THis is bruit force approach with O(n^2) complexity

#include <iostream>
using namespace std;
void elements(int array[], int size,int k)
{
    
    int times = size / k;
    for ( int i=0 ; i < size-1; i++)
    {
        int count = 1;
        for (int j = i; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                if (count >= times)
                {
                    cout << array[i];
                }
            }
        }
    }
    
}

int main()
{
    int array[8] = { 1,4,3,4,5,4,5,4 };
    int k = 2;
    elements(array, 8, k);
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
