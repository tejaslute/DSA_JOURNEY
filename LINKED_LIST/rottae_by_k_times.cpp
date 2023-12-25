class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        
        Node*temp=head;
        Node*goFront=temp;
        int count=1;
        while(count<k)
        {
            goFront=goFront->next;
            count++;
        }
        
        if(goFront->next==NULL)
        {
            return head;
        }
        Node* newHead=goFront->next;
        goFront->next=NULL;
        
        Node*temp2=newHead;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        
        temp2->next=temp;
        
        return newHead;
    }
};
    
