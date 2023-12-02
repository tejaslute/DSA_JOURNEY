/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode * build(vector<int>& preorder,int &index ,int bound)
    {
        if(index == preorder.size() || preorder[index]>bound)
        {
            return NULL;
        }

        TreeNode*root = new TreeNode(preorder[index++]);
        root->left=build(preorder,index,root->val);
        root->right=build(preorder,index,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int i=0;
        return build(preorder,i,INT_MAX);
        
    }
};
