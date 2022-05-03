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

    void insert(node*& head, int data,int count) // passing by refrence  to make change in same that's why 
    {
        node* new_node = new node(data); // created an new node and added an data to it 
        node* current = head;
       
        int count1 = 1;
        while (count1 < count)
        {
            current = current->next;
            count1++;
        }
        new_node->next = current->next;
        current->next = new_node;
        return;
       
    }
};


int main()
{
    node n;  // object 
    node* head = new node(1);// head created an passed a value 1 to  it
    node* first = new node(2);
    head->next = first;
    node* second = new node(3);
    first->next = second;
    node* third = new node(4);
    second->next = third;
    int c;
    cin >> c;
    n.print(head);// printing an link list
    n.insert(head, 7,c);// insertion of data 
    cout << " \n After insertion : " << endl;
    n.print(head);// printing after inssertion 
}

