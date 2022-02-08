// LENGTH_OF_CHAR_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;
int length(char array[])
{
    int count = 0;;
    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char array[10];
    cout << " Enter an name : ";
    cin >> array;
    cout<<"\n  Length of array is :  " << length(array);
    return 0;
}

