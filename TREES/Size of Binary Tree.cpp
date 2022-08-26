void count1(Node*root,int &count)
{
    if(root==NULL)
    {
        return;
    }
    count1(root->left,count);
    count1(root->right,count);
    count++;
}
int getSize(Node* node)
{
   int count=0;
   count1(node,count);
   return count;
}
