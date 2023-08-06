class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         
         vector<vector<int>>v;

         vector<int>v1;
         vector<int>v2;

         for(int i=0;i<numRows;i++)   // this for loop for rows
         {
             for(int j=0;j<=i;j++)   // this is for each row elments 
             {
                 if(j==0 || j==i)
                 {
                     v1.push_back(1);  // For 1st and last element 
                 }else
                 {
                     v1.push_back(v2[j-1]+v2[j]);  // insert from previous row 
                 }
             }

             v.push_back(v1);  // store in answer array 
             v2.clear();       // clear the stored prevoius row
             v2=v1;          // assign current row to this
             v1.clear();      // delete elemnts of current row 
         }
         return v;
    }
};
