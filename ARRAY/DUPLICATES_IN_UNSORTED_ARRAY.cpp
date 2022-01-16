#include<iostream>
using namespace std;

void display(int array[], int size)
{
	cout << "\n array ";
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout << array[i];
	}
}

int dublicates(int array[], int size)
{
	int count ;

	
	for (int i = 0; i < size - 1; i++)
	{
		count = 1;
		if (array[i] != -1)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (array[i] == array[j])
				{
					array[j] = -1;
					count++;
				}
			}  
			if (count > 1)
			{
				cout << "\nDublicates of " << array[i] << " are " << count;
			}
		}
		
	}
	return -1;

}
int main()
{
	int* array, size;
	cout << "\n Enter an size of array : ";
	cin >> size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n array["<<i<<"] = ";
		cin >> array[i];
	}
	display(array, size);
	dublicates(array, size);
	delete[]array;
	return 0;
}