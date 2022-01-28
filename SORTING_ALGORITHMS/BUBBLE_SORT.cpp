// BUBBLE_SORT.cpp : This file contains the 'main' function. Program execution begins and ends there.

using namespace std;
#include <iostream>


void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}


void bubble_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        
        for (int j = 0; j < size-i; j++)
        {
            if (array[j+1]<array[j])
            {
                swap(array[j], array[j+1]);
            }

        }
       
    }
}

int main()
{
    int array1[6] = { 23,45,22,67,3,44 };
    cout << " Sorted array is : ";
    bubble_sort(array1, 6);
    display(array1, 6);
    return 0;
}
