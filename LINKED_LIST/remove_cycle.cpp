class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
{
    if (head == NULL || head->next == NULL) {
        return;
    }

    Node* slow = head;
    Node* fast = head;
    // slow=slow->next;
    // fast=fast->next->next;
    // Detect the loop
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }

    // No loop found
    if (fast == NULL || fast->next == NULL) {
        return;
    }

    // Find the start of the loop
    slow = head;
    
    
    if(slow==fast)
    {
        while(fast->next!=slow)
        {
            fast=fast->next;
        }
    }else{
        while (fast->next!= slow->next) {
        
        slow = slow->next;
        fast=fast->next;
        
        // if(temp->next=slow)
        // {
        //     prev->next=NULL;
            
        //     return;
        // }
        // temp = temp->next;
    }
    }
    
    

    // Break the loop
    fast->next = NULL;
}

};
