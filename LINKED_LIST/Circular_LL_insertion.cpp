
#include <iostream>

using namespace std;


class Node{
    public:
    
        int data;
        Node*next;
        
        Node(int data)
        {
            this->data=data;
            next=NULL;
        }
};



void insert_at_head(Node* &head)
{
    
    cout<<"Enter data to insert at head : ";
    int d;
    cin>>d;
    Node*newNode=new Node(d);
    if(head==NULL)
    {
        head=newNode;
        head->next=head;
    }
    
    else
    {
        Node*temp=head;
        
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        
        newNode->next=head;
        temp->next=NULL;
        temp->next=newNode;
        head=newNode;
    }
}

void insert_at_end(Node* &head)
{
    int d;
    cout<<"Enter data to insert at end of list : ";
    cin>>d;
    
    Node*newNode=new Node(d);
    
    Node*temp=head;
    
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    
    newNode->next=head;
    temp->next=NULL;
    temp->next=newNode;
}
void insert(Node* &head)
{
    cout<<"Enter to which position to enter : ";
    int pos;
    cin>>pos;
    
    if(pos==1)
    {
        insert_at_head(head);
        return;
    }
    
    // Create one temp pointer and traverse it till pos
    
    Node*temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    
    // check if temp is reached at end of list 
    
    if(temp->next==head)
    {
        insert_at_end(head);
        return;
    }
    
        // Insert at required position 
        int d;
        cout<<"Enter data to insert at position : ";
        cin>>d;
        Node*newNode=new Node(d);
        
        newNode->next=temp->next;
        temp->next=NULL;
        temp->next=newNode;
    
}


void display(Node* &head)
{
    Node*temp=head;
    cout<<"\n Displaying list : ";
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main()
{
    Node*head;
    insert(head);
    insert(head);
    insert(head);
    insert(head);
    insert(head);
    display(head);

    return 0;
}
