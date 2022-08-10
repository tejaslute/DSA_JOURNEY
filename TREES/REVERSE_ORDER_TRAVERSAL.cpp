// CREATING_TREE_USING_RECURSION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<queue>
using namespace std;
class Node {

public:

    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

    Node* buildTree(Node* root)
    {
        int data;
        cout << "Enter an data : ";
        cin >> data;
        root = new Node(data);
        if (data == -1)
        {
            return NULL;
        }cout << "\n Enter an data to left of " << data;
        root->left = buildTree(root->left); // reecursive call 
        cout << "\n Enter an data to right of " << data;
        root->right = buildTree(root->right);// reecursive call 
    }
  

vector<int> reverseLevelOrder(Node *root)
{ queue<Node*> q;  q.push(root); 
  vector<int> ans; 
  while(!q.empty())
  {   Node *temp = q.front(); q.pop();
      ans.push_back(temp->data);
      if(temp->right) q.push(temp->right);
      if(temp->left) q.push(temp->left);  }
  reverse(ans.begin(),ans.end());
  return ans; }

   }

int main()
{
  
    Node* root = NULL;
    root= buildTree(root); // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout << "Printing the tree : ";
    cout<<reverseLevelOrder(root);


    return 0;
}

