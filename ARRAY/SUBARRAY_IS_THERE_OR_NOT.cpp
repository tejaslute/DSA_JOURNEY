// IS_ARRAY_SUBARRAY_OF_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace  std;
bool present(int array1[], int array2[], int size1, int size2)
{
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; i < size2; j++)
        {
            if (array1[j] == array2[i])
            {
                count = count + 1;
            }
        }
    }
    cout << " count" << count;
    if (count == size2)
    {
        cout << "\n Array2 is subarray of array1 : ";

    }
    cout << " Its not subarray : ";
    return false;
}

int main()
{
    int array1[8] = { 1,2,4,6,5,0,7,67 };
    int array2[4] = { 7,5,6,4 };
    present(array1, array2, 8, 4);
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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
