class Solution
{
   
public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node* head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node* prev = NULL;
        Node* current = head;
        Node* forward = NULL;
        while (current != NULL)
        {
            forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
        }

        return prev;
    }

};