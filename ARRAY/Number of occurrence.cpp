int count(int arr[], int n, int x) {
	    
	    
	    int start=0;
	    int end=n-1;
	    int last_occ=-1;
	    int first_occ=0;
	    while(start<=end)
	    {
	        int mid=(start+end)/2;
	        if(arr[mid]==x)
	        {
	            last_occ=mid;
	            start=mid+1;
	        }
	        else if(arr[mid]>x)
	        {
	            end=mid-1;
	        }
	        else{
	            start=mid+1;
	        }
	    }
	    start=0;
	    end=n-1;
	    while(start<=end)
	    {
	        int mid=(start+end)/2;
	        if(arr[mid]==x)
	        {
	            first_occ=mid;
	            end=mid-1;
	        }
	        else if(arr[mid]>x)
	        {
	            end=mid-1;
	        }
	        else{
	            start=mid+1;
	        }
	    }
	    return last_occ-first_occ+1;
	}
