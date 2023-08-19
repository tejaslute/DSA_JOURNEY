char getMaxOccuringChar(string str)
    {
        map<char,int>mp;
       // map<char,int>::iterator it;
      
        
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }  
        int min=0;
        char ans;
        for(auto i:mp)
        {
            if(i.second>min)
            {
                min=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
