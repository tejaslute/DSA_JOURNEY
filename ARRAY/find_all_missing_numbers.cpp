class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        

        int i=0;
    
        while(i<nums.size())  
        {
            if(nums[i]!=nums[nums[i]-1])   // using cyclic sort 
            {
                swap(nums[i],nums[nums[i]-1]);
            }else
            {
                i++;
            }
        }

        vector<int>v;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i+1)
            {
                v.push_back(i+1);
            }
        }
        return v;
    }
};


// method 2  using map

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       unordered_map<int, int> freqMap;
       sort(nums.begin(), nums.end());
       vector<int> ans;
       for (auto i: nums){
         freqMap[i]++;
       }
       for (int i = 1; i <= nums.size(); i++){
         auto it = freqMap.find(i);
         if(it == freqMap.end()){
           ans.push_back(i);
         }
       }
       return ans;
    }
};

