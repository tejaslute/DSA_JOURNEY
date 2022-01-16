#include <iostream>
using namespace std;
void display(int array[], int size)
{
	cout << "\n array = ";
	for (int i = 0; i < size; i++)
	{
		cout << " ";
		cout << array[i];
	}
}

int  unionA(int array1[], int array2[], int array3[], int size1, int size2, int* size3)
{
	int k = 0, i = 0, j = 0;
	while (i < size1 && j < size2)
	{
		if (array1[i] < array2[j])
		{
			array3[k++] = array1[i++];
		}
		else if (array1[i] > array2[j])
		{
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}
	for (; i < size1; i++)
	{
		array3[k++] = array1[i];
	}
	
	*size3 = k;
	return array3[*size3];
}
int main()
{
	int* array1, * array2;
	int size1, size2, size3;
	cout << "\n Enter an size of an arrys s: ";
	cin >> size1 >> size2;
	size3 = size1 + size2;
	array1 = new int[size1];
	array2 = new int[size2];
	int* array3;
	array3 = new int[size3];
	for (int i = 0; i < size1; i++)
	{
		cout << "\n Array1[" << i << "] = ";
		cin >> array1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		cout << "\n Array2[" << i << "] = ";
		cin >> array2[i];
	}
	display(array1, size1);
	display(array2, size2);
	unionA(array1, array2, array3, size1, size2, &size3);
	display(array3, size3);
	delete[]array1;
	delete[]array2;
	delete[]array3;
	return 0;
}