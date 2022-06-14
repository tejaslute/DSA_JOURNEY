// MERGE_SORT_USING_RECURSION.cpp : This.  file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void merge(int array[], int start, int end)
{
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int * array1 = new int[len1];
    int * array2 = new int[len2];

    // copy of 1st half 

    int arrayofmain = start;
    for (int i = 0; i < len1; i++)
    {
        array1[i] = array[arrayofmain++];
    }
    
    // copy of 2nd half 
     arrayofmain = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        array2[i] = array[arrayofmain++];
    }

    // merge two araray

    int index1 = 0;
    int index2 = 0;
    arrayofmain = start;
    while (index1 < len1 && index2 < len2)
    {
        if (array1[index1] < array2[index2])
        {
            array[arrayofmain++] = array1[index1++];
        }
        else (array1[index1] > array2[index2])
        {
            array[arrayofmain++] = array2[index2++];
        }
    }
    //copyoing remaining elements 
    while (index1 < len1)
    {
        array[arrayofmain++] = array1[index1];
    }
    while (index2 < len2)
    {
        array[arrayofmain++] = array2[index2];
    }
}
void mergeSort(int array[], int start, int end)
{
    // base case 
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    // sort 1st half 
    mergeSort(array, start, mid);
    // sort 2nd half 
    mergeSort(array, mid + 1, end);

    merge(array, start, end);
}
int main()
{
    int array[7] = { 2,4,1,22,12,23,3 };
    mergeSort(array, 0, 7);
    cout << "Sorted array : " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
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
