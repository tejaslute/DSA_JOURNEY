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
    
    // function for reversing the linked list
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        
        ListNode* curr = head;
        
        while(curr)
        {
            ListNode* next = curr -> next;
            
            curr -> next = prev;
            
            prev = curr;
            
            curr = next;
        }
        
        return prev;
    }
    
    void reorderList(ListNode* head) {
        
        // find the middle of the list, using slow and fast pointer
        
        ListNode* slow = head;
        
        ListNode* fast = head;
        
        while(fast && fast -> next)
        {
            slow = slow -> next;
            
            fast = fast -> next -> next;
        }
        
        // reverse the half list after middle and connect to original list
        
        slow -> next = reverse(slow -> next);
        
        // now make the new arrangement of the list
        
        // first will keep track of nodes of first half
        
        ListNode* first = head;
        
        // second will keep track of nodes of the second half
        
        ListNode* second = slow -> next;
        
        // if flag is true it means include the node of the first part
        
        bool flag = true;
        
        // create a dummy node and point tail pointer to dummy node
        
        // tail pointer will keep track of last node of new rearranged list
        
        ListNode* dummy = new ListNode(0);
        
        dummy -> next = head;
        
        ListNode* tail = dummy;
        
        // rearrange the list
        
        while(second)
        {
            if(flag)
            {
                tail -> next = first;
                
                first = first -> next;
                
                flag = false;
                
                tail = tail -> next;
            }
            else
            {
                tail -> next = second;
                
                second = second -> next;
                
                tail = tail -> next;
                
                flag = true;
            }
        }
        
        // point the slow -> next to NULL
        
        slow -> next = NULL;
        
        // if there is nodes remaining in the first half then connect it to raarranged list
        
        tail -> next = first;
        
        head = dummy -> next;
    }
};
