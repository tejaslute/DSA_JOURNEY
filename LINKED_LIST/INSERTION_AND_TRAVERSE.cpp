// INSERTION_AND_TRAVERSE.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* add;   // pointer to node

    Node(int data)  // constructor
    {
        this->data = data;
    }
    void insertHead(Node*& head, int data)  // refrence taken as same memory chnage 
        {
        Node* temp = new Node(data);
        temp->add = head;
        head = temp;
    }

    void print(Node*& head)
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data <<" ";
            temp = temp->add;
        }
        cout << endl;
    }
};
int main()
{
    Node* n = new Node(5); // node contains an data 5
    Node* head = n;        
    (*n).insertHead(head, 12);
    cout << "Printing an linked list elements : ";
    (*n).print(head);
    return 0;
}
