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
    bool ok(TreeNode* root1, TreeNode* root2){
        
         if(root1==NULL || root2==NULL)
        {
            return root1 == root2;
        }

        if(root1->val!=root2->val)
        {
            return false;
        }

        return ok(root1->left,root2->right) && ok(root2->right,root1->left);
    }
    bool isSymmetric(TreeNode* root) {
        
       

if(root->left==NULL && root->right==NULL)
{
    return true;
}
        return ok(root->left,root->right);
    }
};
