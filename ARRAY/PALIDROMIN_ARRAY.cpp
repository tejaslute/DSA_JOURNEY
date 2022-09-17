int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++)
    	{
    	    if(!valid(a[i]))
    	    {
    	        return 0;
    	    }
    	}
    	return 1;
    }
    private:
        bool valid(int n)
        {
            int sum=0;
            int n1=n;
            while(n>0)
            {
                int rem=n%10;
                sum=sum*10+rem;
                n=n/10;
            }
            if(sum==n1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
