private:
    
    void insert(Node * &head,int carry)
    {
        Node* temp=new Node(carry);
        head->next=temp;
        temp->next=NULL;
        
    }
    
    Node* reverse( Node *head)
     {
         if(head==NULL)
         return NULL;
          Node* curr=head;
          Node* prev=NULL;
          Node* next=NULL;
         while(curr!=NULL)
         {
             next=curr->next;
             curr->next=prev;
             prev=curr;
             curr=next;
         }
         return prev;
     }
    
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        int carry=0,cnt=0;
        head=reverse(head);
        Node *curr=head;
        Node *temp=head;
        while(curr!=NULL)
        {
            int val=curr->data;
            int sum=val+carry;
            if(cnt==0)
            sum=sum+1;
            int digit=sum%10;
            curr->data=digit;
            carry=sum/10;
            curr=curr->next;
            if(temp->next!=NULL)
            {
                temp=temp->next;
            }
            cnt++;
            
        }
        if(carry!=0)
        {
            insert(temp,carry);
        }
        head=reverse(head);
        return head;
    }
