// MERGIING_TWO_SORTED_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void merge(int array1[], int array2[], int array3[],int size1,int size2,int size3)
{
    int i=0, j=0, k=0;
    while (i < size1 && j < size2)
    {
        if (array1[i] < array2[j])
        {
            array3[k] = array1[i];
            k++;
            i++;
        }
        else if (array1[i] > array2[j])
        {
                array3[k] = array2[j];
                k++;
                j++;  
        }
        else if(array3[j]= array1[i])
        { 
            array3[k] = array1[i];
            k++;
            i++;
        }
    }

    while (i < size1)
    {
        array3[k] = array1[i];
        i++;
        k++;
    }
    while (j< size2)
    {
        array3[k] = array1[j];
        j++;
        k++;
    }
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
    int array1[5] = { 3,4,14,34,55 };
    int array2[5] = { 12,34,44,45,56 };
    int array3[10];
    merge(array1, array2, array3, 5, 5, 10);
    display(array3, 10);
    return 0;
}

