Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    
    Node*list1=head1;
    Node*list2=head2;
    Node*dummy=new Node(0);
    Node*temp=dummy;
    while(list1!=NULL && list2!=NULL)
    {
        if(list1->data > list2->data)
        {
            dummy->next=list2;
            dummy=dummy->next;
            list2=list2->next;
        }
        
        else if(list1->data<list2->data){
            dummy->next=list1;
            list1=list1->next;
            dummy=dummy->next;
        }
        else{
            dummy->next=list1;
            list1=list1->next;
            dummy=dummy->next;
        }
    }
    
    while(list1!=NULL)
    {
        dummy->next=list1;
        dummy=dummy->next;
        list1=list1->next;
        
    }
     while(list2!=NULL)
    {
        dummy->next=list2;
        dummy=dummy->next;
        list2=list2->next;
        
    }
    return temp->next;
}  
