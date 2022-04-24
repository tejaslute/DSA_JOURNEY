// INSERT_AT_BEGIN_SINGLE_LL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class node {
public:

    int data;
    node* next;
    
    node(int data)
    {
        this->data = data;
    }
    void insert(node*& head, int data)
    {
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
    void print(node*& head)
    {
        node* n = head;
        while (n != NULL)
        {
            cout << n->data << " ";
            n = n->next;
        }
    }
};
int main()
{
    node* n = new node(5);
    node* head = n;
    (*n).insert(head, 12);
    (*n).insert(head, 14);
    cout << " Output : ";
    (*n).print(head);

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
