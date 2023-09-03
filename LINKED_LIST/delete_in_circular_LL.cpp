
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


void delete_at_head(Node* &head)
{
    
    cout<<"Deleting from head : ";
    
    if(head==NULL)
    {
        cout<<"Link list is already empty : ";
        
    }else
    {
        Node*temp=head;
        
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        
        temp->next=NULL;
        temp->next=head->next;
        head->next=NULL;
        head=temp->next;
    }
}


void delete_from_end(Node*&head)
{
    
    cout<<"Deleting from end : ";
    
    Node*temp=head;
    Node*prev=temp;
    
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
     
     temp->next=NULL;
     prev->next=head;
    
}
void delete_node(Node* &head)
{
    int position;
    cout<<"Enter position to delete : ";
    cin>>position;
    
    if(position==1)
    {
        delete_at_head(head);
        return;
    }
    
    Node*back=head;
    Node*front=head;
    int count=0;
    while(count<position-1)
    {
        back=front;
        
        // Delete from end 
        if(front->next==head)
        {
            delete_from_end(head);
            return;
        }
        
        
        front=front->next;
        count++;
    }
    
    
    back->next=NULL;
    back->next=front->next;
    front->next=NULL;
    
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
    delete_node(head);
     display(head);
    delete_node(head);
     display(head);
    delete_node(head);
    display(head);
    
    

    return 0;
}
