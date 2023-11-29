class Solution {
public:
    TreeNode* helper(TreeNode* root){
        // Only right child present
        if(root->left == NULL){
            return root->right;
        }
        // Only left child present
        else if(root->right == NULL){
            return root->left;
        }
        // Both child present so find minimum of right side or maximum of left side
        // Here, we are finding maximum of left side
        else{
            TreeNode* rightchild = root->right;
            TreeNode* lastright = find(root->left); 
            lastright->right = rightchild;
            return root->left;
        }
    }

    TreeNode* find(TreeNode* root){
        while(root->right != NULL)
            root = root->right;
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return root;
        }
        if(root->val == key){
            return helper(root);
        }

        // Find node with value key
        TreeNode *cur = root;
        while(root != NULL){
            if(root->val > key){
                if(root->left != NULL && root->left->val == key){
                    root->left = helper(root->left);
                    break;
                }
                else{
                    root = root->left;
                }
            }
            else{
                if(root->right != NULL && root->right->val == key){
                    root->right = helper(root->right);
                    break;
                }
                else{
                    root = root->right;
                }
            }
        }
        return cur;
    }
};
