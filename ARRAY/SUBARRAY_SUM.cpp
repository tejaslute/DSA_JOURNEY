 vector<int> subarraySum(int arr[], int n, long long s)
   {
       int start=0,end=0;
       int sum = arr[0];
       while(start<n){
           
           if(sum==s)
               return{start+1,end+1};
               
           else if(sum>s){
               sum -= arr[start];
               start++;
           }
           
           else if(sum<s){
               end++;
               sum += arr[end];
           }
           
       }
       return {-1};
   }
