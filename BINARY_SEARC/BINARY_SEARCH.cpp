// BINARY_SEARCH.cpp : This file  contains the 'main' function. Program execution begis and ends there.


#include <iostream>
using namespace std;
void display (int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int binary_search(int array[], int size,int element)
{
    int low = 0;
    int high = size - 1;
    int mid = (low + high)  / 2;
    while (low <= high)
    {
        if (array[mid] == element)
        {
            cout << "/n Element found de : ";
            return 1;
        }

        if (array[mid] < element)
        {
            low = mid + 1;
        }
        if (array[mid] > element)
        {
            high = mid - 1;
        }
        mid = (low+high) / 2;
    }
    cout << "\n Elemnt not found : ";
    return -1;
}

int main()
{
    int array[6] = { 2,4,6,13,45,67 };
    int element;
    display(array, 6);
    cout << "\n Enter an Element to search : ";
    cin >> element;
    binary_search(array, 6,element);
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
