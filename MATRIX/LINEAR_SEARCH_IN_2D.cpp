

#include <iostream>
#include<vector>
using namespace std;


bool ispresent(int a[][3], int row, int col, int target)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (a[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int a[3][3];
    int target;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter an elements  at position : " << row << " & " << col << " ";
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
    cout << "\n Enter an element to search : ";
    cin >> target;
    if (ispresent(a, 3, 3, target))
    {
        cout << "Element present ! ";
    }
    else
    {
        cout << " Element not found ! ";
    }
}

