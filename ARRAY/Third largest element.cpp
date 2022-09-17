 int thirdLargest(int a[], int n)
    {
         priority_queue<int>p;
         for(int i=0;i<n;i++)
         {
             p.push(a[i]);
         }
         int count=2;
         while(count>0)
         {
             p.pop();
             count--;
         }
         return p.top();
    }
