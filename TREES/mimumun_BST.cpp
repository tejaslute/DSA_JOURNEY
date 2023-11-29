int minVal(Node* root){

    // Write your code here.

    int mini=1e8;

    if(root==NULL)return -1;

    while(root!=NULL){

          if (mini > root->data) {

               mini = min(root->data,mini);

            root = root->left;

          

          }

        //   else if(mini<root->data){

        //       mini= min(root->data,mini);

        //       root = root->right;

              

        //   }

        }

        return mini;    

}
