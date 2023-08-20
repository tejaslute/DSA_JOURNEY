// Input:
// A = AXY 
// B = YADXCP
// Output: 0 
// Explanation: A is not a subsequence of B
// as 'Y' appears before 'A'.


 bool isSubSequence(string A, string B) 
    {
        int j=0;
        int count=0;
        for(int i=0;i<A.length();i++)
        {
            while(j<B.length())
            {
                if(A[i]==B[j])
                {
                     j++;
                    count++;
                    break;
                }
                j++;
            }
        }
        
        if(count==A.size())
        {
            return true;
        }
        return false;
    }




bool isSubSequence(string s1, string s2) 
    {
        int j=0;
        for(int i=0;i<s2.length();i++)
        {
            if(s1[j]==s2[i])
            {
                j++;
            }
            
            if(j==s1.length())
            {
                return 1;
            }
        }
        
        return 0;
    }
};
