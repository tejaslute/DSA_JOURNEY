/*Given two Singly Linked List of Nand M nodes respectively.The task is to check whether two linked lists are identical or not.
Two Linked Lists are identical when they have same data and with same arrangement too.

Example 1:

Input:
LinkedList1: 1->2->3->4->5->6
LinkedList2 : 99->59->42->20
Output : Not identical
*/

bool areIdentical(struct Node* head1, struct Node* head2)
{
	while (head1 != NULL && head2 != NULL)
	{
		if (head1->data != head2->data)
		{
			return false;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	if (head1 != NULL || head2 != NULL)
	{
		return false;
	}
	return true;
}