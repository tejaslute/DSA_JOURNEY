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
void insert_at_head(Node*& head, int data)
{
    Node* temp = new Node(data); // Node with data is created 
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_at_tail(Node*& head, int data)
{
    Node* temp = head;
    Node* newNode = new Node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;

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

void insert_at_middle(Node*& head, int data,int position)
{
    Node* newNode = new Node(data); // Node with data is created 
    Node* temp = head;

    if (position == 1)
    {
        insert_at_head(head, data);
        return;
    }
    
    int count = 1;
    while (count < position-1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insert_at_tail(head, data);
        return;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
   
}
int main()
{
    Node* node1 = new Node(3);
   
    Node* head = node1;
    int data;
    int position;
    insert_at_head(head, 4);
    insert_at_head(head, 5);
    insert_at_head(head, 6);
    insert_at_head(head, 7);
    insert_at_head(head, 8);
    insert_at_head(head, 9);
    print(head);
    length(head);

    cout << "\nEnter position at which data to be inserted : ";
    cin >> position;
    cout << "\nEnter data to be inserted at middle  : ";
    cin >> data;
    insert_at_middle(head, data,position);
    cout << "\nLiked list after insertion ! ";
    print(head);

    return 0;
}

// DOUBLY_LINK_LIST.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
