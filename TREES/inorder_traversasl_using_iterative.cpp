vector<int>inorder(node*root)
{
  stack<node*>s;
  vector<int>v;
  while(true)
  {
    if(root->left!=NULL)
    {
      s.push(root);
      root=root->left;
    }
    else
    {
      if(s.empty()==true) break;
      
      node*temp=s.top();
      s.pop();
      v.push_back(temp->data);
      temp=temp->right;
    }
  }
  return v;
}

    
