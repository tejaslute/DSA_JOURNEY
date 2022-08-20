vector<int>inorder(node*root)
{
  stack<node*>s;
  tree*node=root;
  vector<int>v;
  while(true)
  {
    if(node!=NULL)
    {
      s.push(root);
      node=node->left;
    }
    else
    {
      if(s.empty()==true) break;
      
      node=s.top();
      s.pop();
      v.push_back(node->data);
      node=node->right;
    }
  }
  return v;
}

    
