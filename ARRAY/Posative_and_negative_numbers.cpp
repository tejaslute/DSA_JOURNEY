// Posative_and_negative_numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void all(int array[], int size)
{
    int p1 = 0;
    int p2 = 1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            array[p1] = array[i];
            p1 += 2;

        }
        if (array[i] < 0)
        {
            array[p2] = array[i];
            p2 += 2;
        }
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
    int array[9] = { 1,-4,4,-8,2,-9,3,-6,8 };
    all(array, 9);
    display(array, 9);
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
