// CREATING_LINKED_LIST.cpp : This file contains the 'main' function. Prog ram execution begins and ends there.
//

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    void printlink(node* n)
    {
        while (n->data != NULL)
        {
            cout << "1st element " << n->data << endl;;
            n = n->next;
        }
    }
};
int main()
{
   // creating an 3 nodes 
    node* head = new node();
    node* second = new node();
    node* third = new node();
    // assigning an value to it 

    // first node 
    head->data = 2;
    head->next = second;
    // second node
    second->data = 3;
    second->next = third;
    // third node 
    third->data = 4;
    third->next = NULL;
    // creation of object 
    node n;
    // traversing an linked list 

    n.printlink(head);
    return 0;
}
