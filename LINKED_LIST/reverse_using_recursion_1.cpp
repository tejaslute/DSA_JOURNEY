/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

ListNode*head1;
ListNode *reverse1(ListNode*head)
{
    if(head==NULL || head->next==NULL)
    {
        head1=head;
        return head;
    }

    ListNode*newNode=reverse1(head->next);

    newNode->next=head;
    head->next=NULL;
    return head;
    
    
}


    ListNode* reverseList(ListNode* head) {

        reverse1(head);
        return head1;
        
    }
};
