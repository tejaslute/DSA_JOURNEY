Time Complexity - O(n)
Space complexity - O(n) 
#include <iostream>

using namespace std;


int power(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    return a*power(a,b-1);
}
int main()
{
   int a,b;
   cout<<"Enter an numbers to find power : ";
   cin>>a>>b;
   cout<<"Power of "<<a<<" to "<<b<< " is "<<power(a,b);

    return 0;
}
