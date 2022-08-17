/*Noisy Palindrome
You are given a string s containing lowercase and uppercase alphabet characters as well as digits from "0" to "9".
Return whether s is a palindrome if we only consider the lowercase alphabet characters.*/


bool solve(string s) {
    

    string s1="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s1.push_back(s[i]);
        }
    }
   
   int start=0;
   int end=s1.size()-1;
   while(start<end)
   {
       if(s1[start]!=s1[end])
       {
           return false;
       }
       start++;
       end--;
   }
    return true;
}
