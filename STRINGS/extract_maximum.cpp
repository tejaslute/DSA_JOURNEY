// S = 100klh564abc365bg
// Output: 564
// Explanation: Maximum numeric value 
// among 100, 564 and 365 is 564.



int extractMaximum(string S) 
    { 
        //code here.
        int ans=-1,count=0;
        for(int i=0;i<S.length();i++){
            int num=0;
            while(S[i]>='0' and S[i]<='9'){
                num=num*10+S[i]-'0';
                count++;
                i++;
            }
            if(count>0) ans=max(ans,num);
        }
        return ans;
    } 
