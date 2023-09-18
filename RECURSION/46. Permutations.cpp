class Solution {
    private:
        void comb(vector<vector<int>> &v,vector<int>nums,vector<int> &ds,map<int,int>&mp)
        {
            if(ds.size()==nums.size())
            {
                v.push_back(ds);
                return;
            }

            for(int i=0;i<nums.size();i++)
            {
                if(!mp[nums[i]])
                {
                    ds.push_back(nums[i]);
                    mp[nums[i]]=1;
                    comb(v,nums,ds,mp);
                    mp[nums[i]]=0;
                    ds.pop_back();
                }
            }
        }
public:
    
    vector<vector<int>> permute(vector<int>& nums) {
        

        vector<vector<int>>v;
        vector<int>ds;
        map<int,int>mp;
        comb(v,nums,ds,mp);
        return v;
    }
};










class Solution {
public:

void perm(int index,vector<vector<int>>&v,vector<int>&ds,vector<int>&nums)
{
    if(index==nums.size()-1)
    {
        v.push_back(nums);
    }

    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        perm(index+1,v,ds,nums);
        swap(nums[index],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>v;
        vector<int>ds;
        perm(0,v,ds,nums);
        return v;
    }
};
