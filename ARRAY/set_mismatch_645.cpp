// using cyclic sort
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
            else
        {
            i++;
        }
        }

    vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]!=i+1)
            {
                v.push_back(nums[i]);
                v.push_back(i+1);
            }
        }
        return v;
    }
};

// using map
