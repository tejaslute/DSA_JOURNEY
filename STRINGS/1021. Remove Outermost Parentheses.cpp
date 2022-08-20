string removeOuterParentheses(string s) {
        stack<int>st;
        
        string s1="";
        int count=0;
        int k=0;
        for(int i=0;i<s.length();i++)
        {
           
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            if(s[i]==')')
            {
                st.pop();
                if(st.empty())
                {
                    count=count+1;
                    while(count<i)
                    {
                        s1+=s[count];
                        count++;
                    }
                    count=i+1;
                }
            }
        }
        return s1;
    }
