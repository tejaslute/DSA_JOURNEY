// DOUBLY_LINK_LIST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;

    }
};

void print(Node* head)
{
    cout << "\nDisplaying the Data : ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;

    }
}

void length(Node* head)
{
    cout << "\nDisplaying the length : ";
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;

    }
    cout << len;

}

void insert_at_head(Node*& head, int data)
{
    Node* temp = new Node(data); // Node with data is created 
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void deleteNode(Node*& head, int position)
{

    if (position == 1)
    {
        Node* temp = head;
        temp->next->prev =NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

    }
    else
    {
        Node* current = head;
        Node* back = NULL;

        int count = 1;
        while (count < position)
        {
            back = current;
            current = current->next;
            count++;
        }
        current->prev = NULL;
        back->next = current->next;
        current->next = NULL;
        delete current;




       /* back->next = current->next;
        current->next->prev = back;
        current->next = NULL;
        delete current;*/
    }
}
int main()
{
    Node* node1 = new Node(3);
    Node* head = node1;
  
    
    insert_at_head(head, 20);
    insert_at_head(head, 3);
    insert_at_head(head, 5);
    insert_at_head(head, 6);
    insert_at_head(head, 7);
    insert_at_head(head, 12);
    insert_at_head(head, 245);
    print(head);
    length(head);
    deleteNode(head, 8);
    cout << "\nLiked list after deletion ! ";
    print(head);
    length(head);
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
