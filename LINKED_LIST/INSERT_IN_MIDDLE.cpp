/*Insert in Middle of Linked List
Basic Accuracy : 46.87 % Submissions : 54906 Points : 1
Given a linked list of size N and a key.The task is to insert the key in the middle of the linked list.

Example 1 :

	Input :
	LinkedList = 1->2->4
	key = 3
	Output : 1 2 3 4
	Explanation : The new element is inserted
	after the current middle element in the
	linked list.
	*/
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	int count = 0;
	Node* ptr = head;
	Node* insert = new Node(x);
	if (head == NULL) return insert;

	do {
		count++;
		ptr = ptr->next;
	} while (ptr != NULL);


	if (count % 2 == 0) {
		count = (count / 2);
	}
	else {
		count = (count / 2) + 1;
	}

	Node* p = head;


	for (int i = 0; i < (count - 1); i++) {
		p = p->next;

	}

	insert->next = p->next;
	p->next = insert;

	return head;



}