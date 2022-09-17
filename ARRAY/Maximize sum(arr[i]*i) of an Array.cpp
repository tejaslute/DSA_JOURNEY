int Maximize(int a[],int n)
    {
        sort(a,a+n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i]*i;
        }
        return sum;
    }
