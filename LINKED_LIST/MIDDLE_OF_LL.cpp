//Finding middle element in a linked list
//Easy Accuracy : 47.37 % Submissions : 100k + Points : 2
//Lamp
//This problem is part of GFG SDE Sheet.Click here to view more.
//Given a singly linked list of N nodes.
//The task is to find the middle of the linked list.For example, if the linked list is
//1-> 2->3->4->5, then the middle node of the list is 3.
//If there are two middle nodes(in case, when N is even), print the second middle element.
//For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.
//
//Example 1:
//
//Input:
//LinkedList: 1->2->3->4->5
//Output : 3
//Explanation :
//	Middle of linked list is 3.
int n = 0;
Node* ptr = head;
while (ptr != NULL) {
    n++;
    ptr = ptr->next;
}

Node* p = head;
for (int i = 1; i <= n / 2; i++) {
    p = p->next;

}
return p->data;