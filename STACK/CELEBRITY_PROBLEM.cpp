/*A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.
 

Example 1:

Input:
N = 3
M[][] = {{0 1 0},
         {0 0 0}, 
         {0 1 0}}
Output: 1
Explanation: 0th and 2nd person both
know 1. Therefore, 1 is the celebrity. 

Example 2:

Input:
N = 2
M[][] = {{0 1},
         {1 0}}
Output: -1
Explanation: The two people at the party both
know each other. None of them is a celebrity.*/

 int celebrity(vector<vector<int> >& M, int n) 
    {
        vector<int>v;  // creted a vector to store an number of rows where 0 occurs
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==0) // checked for an zero row 
                {
                    count++;
                }
            }
            if(count==n ) 
            {
                v.push_back(i);
            }
        }
        if(v.size()==1) // If size>1 then 2 celebrity is present therefore check for size1 
        {
            return v[0];
        }
        return -1;
    }
