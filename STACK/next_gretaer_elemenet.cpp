class Solution {
public:


    void search(vector<int>nums,int i,vector<int>&ans)
    {
        bool find=false;
        int element=nums[i];
        for(i+1;i<nums.size();i++)
        {
            if(nums[i]>element)
            {
                ans.push_back(nums[i]);
                find=true;
                break;
            }
        }

        if(!find){
            ans.push_back(-1);
        }


    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        

        vector<int>ans;

        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    search(nums2,j,ans);
                }
            }
        }

        return ans;
    }
};
