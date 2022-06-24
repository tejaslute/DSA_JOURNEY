//Reverse a Linked List in groups of given size.
//Medium Accuracy : 45.83 % Submissions : 100k + Points : 4
//Lamp
//This problem is part of GFG SDE Sheet.Click here to view more.
//Given a linked list of size N.The task is to reverse every k nodes(where k is an input to the function) in the linked list.If the number of nodes is not a multiple of k then left - out nodes, in the end, should be considered as a groupand must be reversed(See Example 2 for clarification).
//
//Example 1 :
//
//	Input :
//	LinkedList : 1->2->2->4->5->6->7->8
//	K = 4
//	Output : 4 2 2 1 8 7 6 5
//	Explanation :
//	The first 4 elements 1, 2, 2, 4 are reversed first
//	and then the next 4 elements 5, 6, 7, 8. Hence, the
//	resultant linked list is 4->2->2->1->8->7->6->5
struct node* reverse(struct node* head, int k)
{
    node* prev = NULL, * cur = head, * nxt;
    int count = 0;
    while (cur && count < k) {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
        count++;
    }
    if (nxt)
        head->next = reverse(nxt, k);
    return prev;
}