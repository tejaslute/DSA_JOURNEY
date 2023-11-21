/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node*left;
        node*right;
        
        node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};

 node* createTree(node*root){
    
    int d;
    cout<<"Enter data : ";
    cin>>d;
    if(d==-1){
        return NULL ;
    }
    root=new node(d);
    
    cout<<"Enter data to left of "<<root->data<<" ";
    root->left=createTree(root->left);
    
    cout<<"Enter data to right of "<<root->data<<" ";
    root->right=createTree(root->right);
    
    return root;
}


void BFS(node*root){
    
    queue<node*>q;
    q.push(root);
    
    while(!q.empty()){
        
        node*temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        
        if(temp->right){
            q.push(temp->right);
        }
    }
}

void inorder(node*root){
    
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node*root){
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node*root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* createUsingLevel(){
    
    queue<node*>q;
    cout<<"Enter data of root : ";
    int d;
    cin>>d;
    node*root=new node(d);
    q.push(root);
    
    while(!q.empty()){
        
        node*temp=q.front();
        q.pop();
        
        cout<<"Enter data left of  "<<temp->data<<" : ";
        int left1;
        cin>>left1;
        
        if(left1 !=-1){
            temp->left=new node(left1);
            cout<<"in"<<" ";
            q.push(temp->left);
        }
        
        
        cout<<"Enter data right of  "<<temp->data<<" : ";
        int right1;
        cin>>right1;
       
        if(right1!=-1){
             temp->right=new node(right1);
            q.push(temp->right);
        }
    }
    return root;
    
}
int main()
{
    node*root=NULL;
    //root=createTree(root);
    root=createUsingLevel();
    cout<<"\n Level order travesal : ";
    BFS(root);
    cout<<"\n Inorder travesal   : ";
    inorder(root);
    cout<<"\n Preorder traversal : ";
    preorder(root);
    cout<<"\n Postorder traversal: ";
    postorder(root);

    return 0;
}
