void fun(Node* root, vector<int>& a)
{
   if(root ==NULL)
   {
       return;
   }
   a.push_back(root->data);
   fun(root->left,a);
   fun(root->right,a);
   
}
vector <int> preorder(Node* root)
{
 // Your code here
 
 vector<int> a;
 
 fun(root,a);
 return a;
 
}
