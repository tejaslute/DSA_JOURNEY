#include<iostream>
using namespace std;
int main()
{
    int array[20],number,i;
    cout<<"\n Enter an number ";
    cin>>number;
    for ( i=0;number>0;i++)
    {
        array[i]=number%2;
        number=number/2;
    }
    for (int j=i-1;j>=0;j--)
    {
        cout<<array[j];
    }

   //int number, number1;
   // cin >> number;
   // while (number != 0)
   // {
   //     number1 = number % 2;
   //     cout << number1;
   //     number = number / 2;
   // }
    return 0;
    
}

