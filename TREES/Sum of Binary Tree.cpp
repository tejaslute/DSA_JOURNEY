void sum1(Node*root,int &sum)
{
    if(root==NULL)
    {
        return;
    }
    sum1(root->left,sum);
    sum1(root->right,sum);
    sum+=root->key;
}

long int sumBT(Node* root)
{
    // Code here
    int sum2=0;
   sum1(root,sum2);
   return sum2;
    
}
