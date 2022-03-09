class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        int ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]-k<0 || arr[i]==k)
            {
                arr[i]=arr[i]+k;
            }
            else
            {
                arr[i]=arr[i]-k;
            }
        }
        int max=arr[0];
        int min=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            else if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        return max-min;
    }
};
