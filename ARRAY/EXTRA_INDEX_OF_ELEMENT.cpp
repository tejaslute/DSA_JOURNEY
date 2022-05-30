//Index Of an Extra Element
//Easy Accuracy : 50.04 % Submissions : 71316 Points : 2
//Given two sorted arrays of distinct elements.There is only 1 difference between the arrays.First array has one element extra added in between.Find the index of the extra element.
//
//Example 1 :
//
//	Input :
//	N = 7
//	A[] = { 2,4,6,8,9,10,12 }
//	B[] = { 2,4,6,8,10,12 }
//Output: 4
//Explanation : In the second array, 9 is
//missing and it's index in the first array
//is 4.

int findExtra(int a[], int b[], int n) {
    int sum1 = 0;
    int sum2 = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum2 = sum2 + b[i];
    }
    int x = sum1 - sum2;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
}