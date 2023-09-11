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

    void insert(ListNode*back,ListNode*front,int d)
    {
        ListNode*newNode=new ListNode(d);
        newNode->next=front;
        back->next=NULL;
        back->next=newNode;
        
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode*back=head;
        ListNode*front=head->next;
        int a=0;
        int b=0;

        while(front!=NULL)
        {
            a=back->val;
            b=front->val;

            int d=gcd(a,b);
            
            insert(back,front,d);
            back=front;
            front=front->next;

            
        }
        return head;
    }
};
