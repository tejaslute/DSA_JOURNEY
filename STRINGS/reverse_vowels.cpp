string modify (string s)
        {
            //code here.
            string sum;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    sum=sum+s[i];
                    s[i]='0';
                }
            }
            int j=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='0'){
                    s[i]=sum[sum.length()-1-j++];
                }
            }
            return s;
        }
