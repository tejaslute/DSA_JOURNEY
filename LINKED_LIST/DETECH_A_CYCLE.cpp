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
    bool hasCycle(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;
        if (head == NULL || head->next == NULL)
        {

            return  false;
        }
        while (fast->next != NULL && fast->next->next != NULL)
        {

            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }


        }
        return false;
    }
};


// Method-2 Using map (hashing)
map<Node*, bool>visited;

if (head == NULL)
{
    return false;
}

Node* temp = head;
while (temp != NULL)
{
    if (visited[temp] == true)
    {
        return true;
    }
    visited[temp] = true;
    temp = temp->next;
}
return false;
