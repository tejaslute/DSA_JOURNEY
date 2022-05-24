int missingNumber(int arr[], int n)
{
    sort(arr, arr + n);
    int min = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            min++;
        }

    }
    return min;
}