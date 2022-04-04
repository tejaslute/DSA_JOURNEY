// ROW_WISE_SUM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<vector>
using namespace std;


void  row_sum(int a[][3], int row, int col)
{
    int sum = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += a[row][col];
        }
        cout << " Sum of " << row << " th row is " << sum << endl;
        sum = 0;
    }
 
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
    
    row_sum(a, 3, 3);
    return 0;
}

