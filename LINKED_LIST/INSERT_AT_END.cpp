// INSERT_AT_HEAD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;

    node()
    {

    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    void print(node* head)
    {

        while (head != NULL)
        {
            cout << head->data << "  ";
            head = head->next;
        }
    }

    void insert_at_tail(node*& head, int data) // passing by refrence  to make change in same that's why 
    {
        node* new_node = new node(data); // created an new node and added an data to it 
        node* current = head;
        if (head->next == NULL)
        {
            current->next = new_node;
            return;
        }
        while(current->next!=NULL)
        {
            current = current->next;
        }
        current->next = new_node;
        return;
    }
};


int main()
{
    node n;  // object 
    node* head = new node(1); // head created an passed a value 1 to  it 
    n.insert_at_tail(head, 2);// insertion of data  // 2 nd node created
    n.insert_at_tail(head, 3);// insertion of data  // 3rd node created
    n.print(head);// printing an link list
    n.insert_at_tail(head, 4);// insertion of data 
    cout << " \n After insertion : " << endl;
    n.print(head);// printing after inssertion 
}

