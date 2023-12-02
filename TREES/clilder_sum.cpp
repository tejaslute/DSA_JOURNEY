https://www.geeksforgeeks.org/problems/children-sum-parent/1

bool inorder(Node*root)
    {
        if(root==NULL)
        {
            return true;
        }
        
        if(root->left == NULL && root->right == NULL) return true;
        
        int l=0;
        int r=0;
        if(root->left!= NULL)
        {
            l=root->left->data;
        }
        
        if(root->right!= NULL)
        {
            r=root->right->data;
        }
        
        if(root->data != l+r) return false;
        
        return inorder(root->left) && inorder(root->right);
        
        

    }
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
       return inorder(root);
    }
