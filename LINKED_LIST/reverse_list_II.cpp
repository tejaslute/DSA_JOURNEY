class Solution {
public:
    ListNode* F(ListNode* curr) {
        ListNode *prev = nullptr, *next = curr;
        while(curr) {
            next = next -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *leftPrev = nullptr, *r = nullptr, *l = nullptr;
        ListNode *curr = head, *prev = nullptr;

        int cnt = 1;
        while(curr) {
            if(cnt == left) {
                leftPrev = prev;
                l = curr;
            }

            if(cnt == right) r = curr;

            prev = curr;
            curr = curr -> next; 
            cnt++;
        }
        
        ListNode *rightSide = r -> next;
        r -> next = nullptr;
        
        ListNode *a = F(l);
        l -> next = rightSide;

        if(!leftPrev) return a;
        leftPrev -> next = a;
        return head;

    }
};
