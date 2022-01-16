#include<iostream>
using namespace std;
void display(int arr[], int size)
{
	cout << "\n myArray : ";
	for (int i = 0; i < size; i++)
	{
		cout << "  ";
		cout << arr[i];
	}

}
int search(int arr[], int size,int element)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			cout << "\n Element is sucessufully found in myArray at position   " << i  ;
			return arr[i];
			
		}	
	}
	cout << "\n Element is not present in an myArray ! ";
	return 1;
}
int main()
{
	int myArray[20],size_of_array,element;
	cout << "Enter an size of an myArray :  ";
	cin >> size_of_array;
	for (int i = 0; i < size_of_array; i++)
	{
		cout << "\n myArray[" << i << "]  =  ";
		cin >> myArray[i];
	}
	display(myArray, size_of_array);
	cout << "\nEnter an element to be searched in myArray :  ";
	cin >> element;
	search(myArray, size_of_array, element);
	return 0;
}