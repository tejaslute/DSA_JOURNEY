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
int main()
{
    Node* node1 = new Node(3);
    Node* head = node1;
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
