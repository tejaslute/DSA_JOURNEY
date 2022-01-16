// ROTATION_OF_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void reverse(int array[], int start,int end)
{
    
    while(start<end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void dislpay(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " array[" << i << "] = " << array[i];
    }
}

int main()
{
    int* array, size, difference;
    cout << "\n Enter am szie of an array : " << endl;
    cin >> size;
    array = new int[size];
  
    cout << " \n Enter an array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    dislpay(array, size);
    cout << "\n How many times to rotate : ";
    cin >> difference;
    reverse(array,0, size - difference - 1);
    reverse(array, difference+1, size - 1);
    reverse(array, 0, size - 1);
    dislpay(array, size);
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
