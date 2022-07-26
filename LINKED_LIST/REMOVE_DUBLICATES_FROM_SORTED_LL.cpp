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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* current = head;
        if (head == NULL)
        {
            return NULL;
        }

        while (current != NULL)
        {
            if ((current->next != NULL) && (current->val == current->next->val))
            {
                ListNode* next_next = current->next->next;
                ListNode* deleteNode = current->next;
                delete(deleteNode);
                current->next = next_next;
            }
            else
            {
                current = current->next;
            }

        }
        return head;
    }
};