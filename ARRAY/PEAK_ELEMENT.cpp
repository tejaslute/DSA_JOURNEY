// PEAK_ELEMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class X
{
public:
    int peakElement(int arr[], int n)
    {
        int greater = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                greater = i;
            }
        }
        return greater;;
    }
};

int main()
{
    int n;
    cout << "Enter the length of array : ";
    cin >> n;
    int *array = new int[n];
    cout << "\n Enter an array elements : ";
    for( int i = 0; i < n; i++)
    {
        cout << "\n Element at position " << i;
        cin >> array[i];
    }
    X c;
    cout<<"Position at which peak is : "<<c.peakElement(array, n);
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
