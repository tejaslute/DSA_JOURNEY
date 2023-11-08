// tree : 1 2 3 4 5 6 7 
// level order : 1 2 3 4 5 6 7
// reverse_;evel :  7 6 5 4 3 2 1 

vector<int> reverseLevelOrder(Node *root)
{
    vector<int>ans;
    
    queue<Node*>q;
    if(!root){
        return ans;
    }
    
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->right){
            q.push(temp->right);
            
        }
        
        if(temp->left){
            q.push(temp->left);
        }
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}
