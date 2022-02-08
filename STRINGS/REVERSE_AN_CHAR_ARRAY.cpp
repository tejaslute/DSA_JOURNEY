\// REVERSE_AN_CHAR_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

int reverse(char array[], int m)
{
    int start = 0;
    int end = m - 1;
    while (start < end)
    {
        swap(array[start++],array(end--));
    }
}
int main()
{
    char name;
    cout << " Enter an name :  ";
    cin >> name;
    int length_of_char = length(name);
    reverse(name, length_of_char);
}

