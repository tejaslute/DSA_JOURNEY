// INSERTION_SORT.cpp : This file contains the 'main'  function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
void insertion_sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = array[i];
        int j = i - 1;
        for (j; j >= 0; j--)
        {
            if (array[j]>temp)
            {
                array[j + 1] = array[j];
}
            else
            {
                break;
            }
        }
        array[j + 1] = temp;
    }
 }
int main()
{
    int array[6] = { 23,67,34,8,1,2 };
    display(array, 6);
    insertion_sort(array, 6);
    cout << endl;
    display(array, 6);
    return 0;
}
