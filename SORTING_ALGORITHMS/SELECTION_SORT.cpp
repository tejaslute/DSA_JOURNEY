// SELECTION_SORT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>


void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}


void selection_sort(int array[], int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[minIndex] > array[j])
            {
                minIndex = j;
            }
            
        }
        swap(array[i], array[minIndex]);
    }
}

int main()
{
    int array[6] = { 23,45,22,67,3,44 };
    cout << " Sorted array is : ";
    selection_sort(array, 6);
    display(array, 6);
    return 0;

}
