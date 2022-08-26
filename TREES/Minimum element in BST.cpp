int minValue(Node* root) {
   // Code here
   Node* p = root;
   if(root==NULL)
   {
       return -1;
   }
   
   while(p->left != NULL)
   {
       p = p->left;
   }
   
   return p->data;
}
