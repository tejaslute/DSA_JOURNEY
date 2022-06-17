/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Node
{
public:

    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }


};

void insert_at_head(Node*& head, int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}


/*void insert_at_given(Node* &head,int position,int d3)
{
    Node*temp=new Node(d3);
    Node*front=head->next;
    Node*back=head;
    int count=1;
    while(count!=position )
    {
        front=front->next;
        back=back->next;;

        count++;
    }
back->next=temp;
temp->next=front;



}*/
void insert_at_tail(Node*& head, int d1)
{
    Node* temp = head;
    Node* temp1 = new Node(d1);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = temp1;
}

void insert_at_given(Node*& head, int position, int d3)
{
    Node* Nodetoinsert = new Node(d3);

    Node* temp = head;
    int count = 1;
    if (position == 1)
    {
        insert_at_head(head, d3);
        return;
    }
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insert_at_tail(head, d3);
        return;
    }
    Nodetoinsert->next = temp->next;
    temp->next = Nodetoinsert;



}

void print1(Node*& head)
{
    Node* temp = head;
    cout << "Linked list data  : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = new Node(5);

   
    char ch = 'Y';
    while (ch == 'Y' || ch=='y')
    {
        cout << "1.Insert at Head \n2.Insert at any position\n3.Insert at tail\n4.Display ";
        int s;
        cout << "\nEnter which operation to perform : ";
        cin >> s;
        switch (s)
        {
        case 1:  cout << "\nEnter data to be inserted at head  : ";
            int d;
            cin >> d;
            insert_at_head(head, d);
            break;
        case 2:      int position, d3;
            cout << "\nEnter an position and data to be inserted : ";
            cin >> position >> d3;
            insert_at_given(head, position, d3);
            break;
        case 3:      cout << " \nEnter data to be inserted at tail : ";
            int d1;
            cin >> d1;
            insert_at_tail(head, d1);
            break;

        case 4:       print1(head);
            break;
        }

        cout << "\nDo you want to continue Y/N : ";
        cin >> ch;
    }
  
    
    return 0;
}