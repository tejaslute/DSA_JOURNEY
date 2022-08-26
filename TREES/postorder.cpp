void a(Node*root,vector<int>&v)
{
    if(root==NULL)
    {
        return ;
    }
    a(root->left,v);
    a(root->right,v);
    v.push_back(root->data);

}
vector <int> postOrder(Node* root)
{
    vector<int>v;
  a(root,v);
  return v;
}
