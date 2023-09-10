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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)
        return head;

        ListNode* cur=head;
        int len=1;

        while(cur->next!=NULL){            //count length
            cur=cur->next;
            len++;
        }

        cur->next=head;
        k=k%len;                   //if k>length
        k=len-k;    

        ListNode* temp=head;               

        int i=1;
        while(i<k){                         // find len-kth node
            temp=temp->next;
            i++;
        }

        head=temp->next;
        temp->next=NULL;

        return head;
    }
};
