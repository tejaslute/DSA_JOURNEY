/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode*temp1=headA;
        ListNode*temp2=headB;

        int l1=1;
        int l2=1;

        while(temp1!=NULL)
        {

            temp1=temp1->next;
            l1++;
        }

        while(temp2!=NULL)
        {
            temp2=temp2->next;
            l2++;
        }

        if(l2-l1>=0)
        {
            int x=l2-l1;
            ListNode*temp4=headB;
            while(x)
            {
                temp4=temp4->next;
                x--;
            }

            ListNode*t=headA;
            while(temp4!=NULL)
            {
                if(temp4==t)
                {
                    return t;
                }
                temp4=temp4->next;
                t=t->next;
            }
        }else{

            int x=l1-l2;
            ListNode*temp3=headA;

            while(x)
            {
                temp3=temp3->next;
                x--;
            }

            ListNode*t=headB;
            while(temp3!=NULL)
            {
                if(temp3==t)
                {
                    return t;
                }
               
                temp3=temp3->next;
                 t=t->next;

            }
        }

        

    return nullptr;
    }
};
