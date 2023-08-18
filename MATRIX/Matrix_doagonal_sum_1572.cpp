class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++)
        {
            if((mat.size()-1-i)==i)
            {
            sum+=mat[i][i];
            }
            else
            {
                sum+=(mat[i][mat.size()-1-i]+mat[i][i]);
            }
            mat[i][i]=INT_MAX;
    }
    return sum;
    }
};
