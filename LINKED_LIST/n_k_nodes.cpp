//Find n / k th node in Linked list
//Basic Accuracy : 44.94 % Submissions : 30411 Points : 1
//Given a singly linked list and a number k.Write a function to find the(N / k)th element, where N is the number of elements in the list.We need to consider ceil value in case of decimals.
//
//Input:
//	The first line of input contains an integer T denoting the number of test cases.The first line of each test case consists of an integer N.The second line consists of N spaced integers.The last line consists of an integer k.
//
//	Output:
//		Print the data value of(N / k)th node in the Linked List.

int fractional_node(struct Node* head, int k)
{
    // no node condition
    if (head == NULL) {
        return -1;
    }

    int len = 0;
    Node* t = head;

    //finding the length
    while (t != NULL) {
        len++;
        t = t->next;
    }

    //finding the ceil position
    int pos = ceil(float(len) / float(k));
    int i = 1;

    // going to the position
    t = head;
    while (i < pos) {
        t = t->next;
        i++;
    }

    // returning the pos
    return t->data;
}