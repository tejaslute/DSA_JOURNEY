 RCULAR_LL_INSERTION.cpp : This file contains the 'main' function. Program execution begins and ends there. 


#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_in_CLL(Node*& tail, int element, int d)
{
    if (tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        tail->next = newNode;
    }
    else
    {

        Node* temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        Node* newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}


void delete_CLL(Node*& tail, int d)
{
    Node* back = tail;
    Node* front = tail->next;
    while (front->data != d)
    {
        back = front;
        front = front->next;
    }
    back->next = front->next;

    if (front == back) // single node
    {
        tail = NULL;
    }
     if (tail == front)// >2 node link list
    {
        tail = back; 
    }
   
    front->next = NULL;
    delete front;
}

void print(Node* tail)
{
    Node* temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
}
int main()
{

    Node* tail = NULL;
    insert_in_CLL(tail, 3, 4);
    insert_in_CLL(tail, 4, 5);
    insert_in_CLL(tail, 4, 9);
    print(tail);
    cout << "\nAfter deletion : ";
    delete_CLL(tail, 4);
    print(tail);
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
