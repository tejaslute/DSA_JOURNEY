// LEVEL_ORDER_TRAVERSAL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<vector>
#include<stack>
#include<queue>
class Node {

    int data;
    Node* left;
    Node* right;
public:
    Node(int data)
    {
        this->data = data;
        left = NULL;
         right = NULL;
    }
    
    vector<vector<int>> levelorder(Node*root)
    {
        vector<vector<int>>ans;
        if (root == NULL)
        {
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size(); // This is  for traversal of each successor of node 
           
            vector<int>level; // This is for an storing an level wise data 
            for (int i = 0; i < size; i++)
            {
                Node* temp = q.front(); // taking an node for which we have to go left and right 
                q.pop();
                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    q.push(temp->right);
                }
                cout << temp->data;
                level.push_back(temp->data);
                
            }
            ans.push_back(level);
        }
        return ans;
    }
};



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
