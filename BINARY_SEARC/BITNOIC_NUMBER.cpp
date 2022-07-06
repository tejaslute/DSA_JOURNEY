//Given an array arr of n elements which is first increasingand then may be decreasing, find the maximum element in the array.
//Note: If the array is increasing then just print then last element will be the maximum value.
// 
//Example 1 :
//
//	Input :
//	n = 9
//	arr[] = { 1,15,25,45,42,21,17,12,11 }
//Output: 45
//Explanation : Maximum element is 45.


int findMaximum(int arr[], int n) {
	int start = 0;
	int end = n - 1;
	int mid = (start + end) / 2;
	while (start < end)
	{

		if (arr[mid] < arr[mid + 1])
		{
			start = mid + 1;
		}
		else
		{
			end = mid;
		}
		mid = (start + end) / 2;
	}
	return arr[start];
}
