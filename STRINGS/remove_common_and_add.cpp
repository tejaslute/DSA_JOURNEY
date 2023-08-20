// s1 = aacdb
// s2 = gafd
// Output: cbgf
// Explanation: The common characters of s1
// and s2 are: a, d. The uncommon characters
// of s1 and s2 are c, b, g and f. Thus the
// modified string with uncommon characters
// concatenated is cbgf.


string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        map<char,int>m1;
        map<char,int>m2;
        string ans;
        
        for(int i=0;i<s1.size();i++)
        {
            m1[s1[i]]++;
        }
        
        
        for(int i=0;i<s2.size();i++)
        {
            m2[s2[i]]++;
        }
        
        
        
        
        for(int i=0;i<s1.size();i++)
        {
            if(m2.find(s1[i])!=m2.end())
            {
                continue;
            }
            else
            {
                ans+=s1[i];
            }
        }
        for(int i=0;i<s2.size();i++)
        {
            if(m1.find(s2[i])!=m1.end())
            {
                continue;
            }else
            {
                ans+=s2[i];
            }
        }
        if(ans.size()==0)
        {
            return "-1";
        }
        return ans;
    }
