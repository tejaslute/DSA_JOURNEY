#include<iostream>
using namespace std;
void swapp(int i, int arr[],int n)
{
	if (i > n / 2)
	{
		return;
	}
	swap(arr[i], arr[n - i - 1]);
	swapp(i + 1, arr, n);
	return;
}

int main()
{
	int array[5] = { 1,2,3,4,5 };
	swapp(0, array, 5);
	cout << "After swapping " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}