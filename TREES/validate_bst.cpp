class Solution {
public:
    bool fun(TreeNode* root,long long minval,long long maxval){
        if(!root) return true;
        if(root->val>=maxval || root->val<=minval) return false;

        return(fun(root->left,minval,root->val) && fun(root->right,root->val,maxval));
    }

    bool isValidBST(TreeNode* root) {
        return fun(root,LONG_MIN,LONG_MAX);
    }

    
};




class Solution {
public:

    void inorder(TreeNode* root , vector<int> & ans)
    {
        if(root==NULL)
        {
            return ;
        }
        inorder(root->left,ans);
       
        ans.push_back(root->val);

         inorder(root->right,ans);
        
    }
    bool isValidBST(TreeNode* root) {
            vector<int>v;
                inorder(root,v);

            for(int i=1;i<v.size();i++)
            {
                if(v[i]<=v[i-1])
                {
                    return false;
                }
            }
            return true;
    }
};
