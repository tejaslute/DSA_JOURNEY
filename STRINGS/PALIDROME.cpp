// PALIDROME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int length(char array[])
{
    int count = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
bool check(char array[],int m)
{
    int start = 0;
    int end = m - 1;
    char temp;
    while (start < end)
    {
        if (array[start++] == array[end--])
        {
            return true;
       }
        else
        {
            return false;
        }
    }

}

int main()
{
    char name[20];
    cout << "Enter an name : ";
    cin >> name;
    int lenth1 = length(name);
    if (check(name, lenth1) == 1)
    {
        cout << "\n Its is an palidrome ! ";
    }
    else
    {
        cout << "\n Its not palideomwe ! ";
    }
    return 0;

}

