 void sorting(Node*root,vector<int>& nums)
    {
        if(root==NULL)
        {
            return;
        }
        sorting(root->left,nums);
        nums.push_back(root->data);
        sorting(root->right,nums);
    }
    
    
    bool isBST(Node* root) 
    {
        vector<int>v;
        sorting(root,v);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>v[i+1])
            {
                return false;
            }
        }
        return true;
    }
