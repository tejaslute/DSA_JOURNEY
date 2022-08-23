/*nums = [7, 1, 5, 3]
Output
true
Explanation
If we rearrange nums to [1, 3, 5, 7], then the difference between every two consecutive numbers is 2.*/
bool solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int val=nums[1]-nums[0];
    for(int i=1;i<nums.size()-1;i++)
    {
        if(nums[i+1]-nums[i]!=val)
        {
            return false;
        }
    }
    return true;
}
