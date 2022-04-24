// INSERTION_AT_END_SLL.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
class node {
public:
    int data;
    node* next;

    void insertAtEnd(node*& head, int data1)
    {
        node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->data = data1;
        temp->next = NULL;
    }

    void print(node*& head)
    {
        node* n = head;
        while (n->next!=NULL)
        {
            cout << n->data << " ";
            n = n->next;
        }
    }
};
int main()
{
    node* n1 = new node;
    node* head = n1;
    (*n1).insertAtEnd(head, 12);
    (*n1).insertAtEnd(head, 13);
    (*n1).print(head);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
