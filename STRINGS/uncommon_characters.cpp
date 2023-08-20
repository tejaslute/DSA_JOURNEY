  set<char>s;
            set<char>s1;
            string ans="";
            for(int i=0; i<A.length(); i++)
            {
                s.insert(A[i]);
            }
            for(int i=0; i<B.length(); i++)
            {
                s1.insert(B[i]);
            }
             for(int i=0; i<B.length(); i++)
             {
                 if(s.find(B[i])==s.end())
                 {
                     ans.push_back(B[i]);
                 }
             }
             for(int i=0; i<A.length(); i++)
             {
                 if(s1.find(A[i])==s1.end())
                 {
                     ans.push_back(A[i]);
                 }
             }
             if(ans.length()>0)
             {
                sort(ans.begin(), ans.end());
                string ans1;
                for(int i=0; i<ans.length()-1; i++)
                {
                   if(ans[i]!=ans[i+1])
                   {
                      ans1.push_back(ans[i]);
                   }
                }
                ans1.push_back(ans[ans.length()-1]);
                return ans1;
             }
             return "-1";
