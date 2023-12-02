void build(Node* node)
    {
        if(node==NULL)
        {
            return;
        }
        
        Node*r=node->right;
        
        node->right=NULL;
        node->right=node->left;
        node->left=NULL;
        node->left=r;
        
        build(node->left);
        build(node->right);
    }
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        
        build(node);
    }
