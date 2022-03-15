/*
Print first letter of every word in the string 
Basic Accuracy: 58.95% Submissions: 27480 Points: 1
Given a string S, the task is to create a string with the first letter of every word in the string.
 

Example 1:

Input: 
S = "geeks for geeks"
Output: gfg
*/
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    cout<<S[0];
	    for(int i=1;i<S.length();i++)
	    {
	        if(S[i]==' ')
	        {
	          cout<<S[i+1];  
	        }
	    }
	}
};
