// using cyclic sort 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]<nums.size()&&nums[i]!=nums[nums[i]])
            {
                swap(nums[i],nums[nums[i]]);
            }
            else
            {
                i++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
    
    return nums.size();
    }

};

// using sum

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1+=nums[i];
        }
        return sum-sum1;
        
    }
};
