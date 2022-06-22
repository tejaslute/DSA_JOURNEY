//Given a linked list consisting of L nodesand given a number N.The task is to find the Nth node from the end of the linked list.
//
//Example 1:
//
//Input:
//N = 2
//LinkedList : 1->2->3->4->5->6->7->8->9
//Output : 8
//Explanation : In the first example, there
//are 9 nodes in linked list and we need
//to find 2nd node from end. 2nd node
//from end os 8.

int getNthFromLast(Node * head, int n)
{
    if (head == NULL) {
        return -1;
    }
    Node* temp = head;

    int count = 0;

    while (temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (n > count) {
        return -1;
    }


    int dif = count - n;
    int cnt = 0;

    while (cnt != dif) {
        head = head->next;
        cnt++;
    }

    return head->data;
}