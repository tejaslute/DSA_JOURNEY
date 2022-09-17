 bool check(vector<ll> A, vector<ll> B, int N) {
        priority_queue<int>s1;
        priority_queue<int>s2;
        
        for(int i=0;i<A.size();i++)
        {
            s1.push(A[i]);
        }
        for(int i=0;i<B.size();i++)
        {
            s2.push(B[i]);
        }
       if(s1.size()!=s2.size())
       {
           return false;
       }
       
       while(!s1.empty())
       {
           if(s1.top()!=s2.top())
           {
               return false;
           }
           s1.pop();
           s2.pop();
       }
       return true;
    }
