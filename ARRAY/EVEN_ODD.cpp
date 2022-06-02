//Given an array A[] of N elements.The task is to count number of evenand odd elements in the array.
//
//Example:
//
//Input:
//N = 5
//A[] = 1 2 3 4 5
//Output :
//	3 2
//	Explanation :
//	There are 3 odd elements(1, 3, 5)
//	and 2 even elements(2 and 4).

void countOddEven(int arr[], int sizeof_array)
{

    int even = 0;
    int odd = 0;
    for (int i = 0; i < sizeof_array; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else if (arr[i] % 2 != 0)
        {
            odd++;
        }

    }
    cout << odd << " " << even << endl;


}