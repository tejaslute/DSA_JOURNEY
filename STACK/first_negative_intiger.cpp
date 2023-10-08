vector<long long>v;
                        queue<long long >q;
                        for(int i=0;i<k-1;i++)
                        {
                            if(A[i]<0)
                            {
                            q.push(A[i]); 
                            } // push till K-1 
                        }
                        
                        for(int i=k-1;i<N;i++)
                        {
                           
                                if(A[i]<0)
                                {
                                    q.push(A[i]);
                                }
                                
                                if(!q.empty())
                                {
                                    v.push_back(q.front());
                                    
                                    if(q.front()==A[i-k+1])
                                    {
                                        q.pop();
                                    }
                                }
                                else{
                                    v.push_back(0);
                                }
                        }
                        
                        return v;
 }
