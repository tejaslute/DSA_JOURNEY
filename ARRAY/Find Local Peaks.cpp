vector<int> solve(vector<int>& nums) {
    vector<int> res;
    if (nums.size() == 1) return res;
    for (int i = 0; i < nums.size(); i++) {
        if (i == 0 && nums[i] > nums[i + 1])
            res.push_back(i);
        else if (i == nums.size() - 1 && nums[i - 1] < nums[i])
            res.push_back(i);
        else {
            if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1]) res.push_back(i);
        }
    }
    return res;
}
