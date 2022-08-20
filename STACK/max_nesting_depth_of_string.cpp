// Leetcode-1614. Maximum Nesting Depth of the Parentheses
 int maxDepth(string s) {
        stack<int>st;
        int max=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                if(st.size()>max)
                {
                    max=st.size();
                }
            }
            
            else if(s[i]==')')
            {
                st.pop();
            }
        }
        return max;
        
    }
