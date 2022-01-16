// MANIMUM_HEOGHTS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int heights(int array[], int size , int k)
{
    int max = INT_MIN;
    int min = INT_MAX;
    int start = 0;
    
    while (start < size)
    {
        if (array[start] - k < 0)
        {
            array[start] = array[start] + k;
            start++;

        }
        else if (array[start] - k > 0 && array[start] > array[start-1])
        {
            array[start] = array[start] - k;
            start++;
        }

    }
    
    return -1;
}
int outputss(int array[], int size)
{
    int max = 0;
    int min = 0;
    int output = max - min;
    int start=0;
    for(int i=0;i<size;i++)
    {
         if (array[start] < min)
        {
            min = array[start];
            max = array[start];
            
        }
    }
    cout << " diffre " << max-min;
    return output;
}
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[4] = {1,5,8,10 };
    int k = 2;
    heights(array, 4, k);
    display(array, 4);
    outputss(array, 4);
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
