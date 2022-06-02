//Given an array Arr of N positive integersand another number X.Determine whether or not there exist two elements in Arr whose sum is exactly X.
//
//Example 1:
//
//Input:
//N = 6, X = 16
//Arr[] = { 1, 4, 45, 6, 10, 8 }
//Output: Yes
//Explanation : Arr[3] + Arr[4] = 6 + 10 = 16

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	/* for(int i=0;i<n-1;i++)
	 {
		 for(int j=i;j<n;j++)
		 {
			 if(arr[i]+arr[j]==x)
			 {
				 return true;
			 }
		 }
	 }
	 return false;*/

	unordered_set<int>s;
	for (int i = 0; i < n; i++)
	{
		int temp = x - arr[i];
		if (s.find(temp) != s.end())
		{
			return true;
		}

		s.insert(arr[i]);


	}
	return false;
}