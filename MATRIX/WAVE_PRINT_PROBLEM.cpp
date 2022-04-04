// WAVE_PRINT_PROBLEM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<vector>
using namespace std;


bool ispresent(int a[][3], int row, int col)
{
    for (int col = 0; col< 3; col++)
    {
        if (col % 2 != 0)
        {
            for (int row = 2; row>=0; row--)
            {
                cout << a[row][col]<<" ";
            }
            cout << endl;
        }
        else
        {
            for (int row = 0; row < 3; row++)
            {
                cout << a[row][col] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

int main()
{
    int a[3][3];
 
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter an elements at position : " << row << " & " << col << " ";
            cin >> a[row][col];
        }
    }

    cout << " Printing elements in matrix : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {

            cout << a[row][col] << " ";
        }
        cout << endl;
    }
  
    ispresent(a, 3, 3);
   
}


//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
