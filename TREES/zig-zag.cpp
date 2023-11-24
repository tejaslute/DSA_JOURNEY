
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;

        if(root==NULL)
        {
            return ans;
        }

        bool flag=true;
        queue<TreeNode* >q;
        q.push(root);
        flag=false;

        while(!q.empty())
        {
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }

                if(temp->right)
                {
                    q.push(temp->right);
                }
            }

            if(flag){
                reverse(v.begin(),v.end());
            
            }
                flag= !flag;

            ans.push_back(v);
        }
        return ans;
    }

};
