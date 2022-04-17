// QUICK_SORT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int pivot_element(int array[], int start, int end)
{
    int pivot = array[start];
    int count = 0;
    //count an element less than pivot 
    for (int i = start + 1; i <= end; i++)
    {
        if (pivot >= array[i])
        {
            count++;
        }
    }
    int pivotIndex = count + start;
    // place an pivot elemnt to right position by swapping 
    swap(array[start], array[pivotIndex]);

    //now place all elemnts less than pivot to left and greater than to right 
    int i = start;
    int j = end;
    while (i<pivotIndex && j>pivotIndex)
    {
        while (array[i] < pivot)
        {
            i++;
        }
        while (array[j] > pivot)
        {
            j--;
        }
        if (i<pivotIndex && j>pivotIndex)
        {
            swap(array[i++], array[j--]);
        }
    }
    return pivotIndex;
}
void quick_sort(int array[], int start, int end)
{
    // base condition
    if (start >= end)
    {
        return;
    }

    // pivot element 
    int p = pivot_element(array, start, end);

    // quick sort left part 

    quick_sort(array, start, p - 1);

    // quick sort right part 

    quick_sort(array, p + 1, end);
}
int main()
{
    int array[7] = { 1,4,2,7,33,22,16 };
    quick_sort(array, 0, 6);
    cout << "Sorted array : ";
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
