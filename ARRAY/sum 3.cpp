//sum of n numbers : 
#include<iostream>
using namespace std;
int main()
{
int n, sum = 0;
	int i = 1;
	cout << "\n Enter an number  : ";
	cin >> n;

	while (i <= (n / 2 )== 0)
	{
	sum = sum + i;
		i++;
}

	cout << "\n Sum of n numbers is : " << sum;
//
//int main()
//{
//	int n, i = 1, sum = 0;
//	cout << "\n Enter an njmber : ";
//	cin >> n;
//	sum = n * (n + 1) / 2;
//	cout << "\n SUm is " << sum;
//	return 0;
//}