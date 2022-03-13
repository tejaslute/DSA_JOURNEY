class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left;
        vector<int>right;
        left[0]=height[0];
        for(int i=1;i<height.size();i++)
        {
           left[i]=max(left[i-1],height[i]);
        }
        
        right[0]=height[height.size()-1];
        for(int i=height.size();i>=0;i--)
        {
           right[i]=max(right[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<height.size();i++)
        {
          ans+=min(left[i],right[i])-height[i];
        }
        return ans;
    }
};
