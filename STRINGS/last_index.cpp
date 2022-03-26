/* Last index of a character in the string 
Basic Accuracy: 76.83% Submissions: 4899 Points: 1
Given a string S  and a character X, the task is to find the last index (0 based indexing) of X in string S. If no index found then the answer will be -1.


Example 1:

Input: S = "Geeks", P = 'e'
Output: 2
Explanation: Last index of 'e' */

int LastIndex(string s, char p){
        for(int i=s.length();i>=0;i--)
        {
            if(s[i]==p)
            {
                return i;
            }
        }
        return -1;
    }
