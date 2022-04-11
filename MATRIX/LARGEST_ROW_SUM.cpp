// LARGEST_ROW_SUM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ROW_WISE_SUM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<vector>
using namespace std;

 
void  row_sum_largest(int a[][3], int row, int col)
{
    int sum = 0;
    int largest_sum = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += a[row][col];
        }
        if (sum > largest_sum)
        {
            largest_sum = sum;
        }
        sum = 0;
    }
    cout << "\n Largest sum in row is : " << largest_sum;

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

    row_sum_largest(a, 3, 3);
    return 0;
}


