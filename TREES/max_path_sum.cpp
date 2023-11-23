
class Solution {
public:

    int height(TreeNode* root , int & ans){
        if(root==NULL){
            return 0;
        }
        int left=max(0,height(root->left,ans));
        int right=max(0,height(root->right,ans));

        ans=max(ans,root->val+left+right);
        return root->val+max(left,right);

    }
    int maxPathSum(TreeNode* root) {
        
        int ans=INT_MIN;
        height(root,ans);
        return ans;
    }
};
