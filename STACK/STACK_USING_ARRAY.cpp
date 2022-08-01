// STACK_USING_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Stack {
public:
    int* array;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        array = new int[size];
    }

   void  push(int element)
    {
       if (size - top > 1)
       {
           top++;
           array[top] = element;
       }
       else
       {
           cout << "Stack Overflow " << endl;
       }
    }

   void pop()
   {
       if (top != -1)
       {
           top--;
       }
       else
       {
           cout << "Stack is already Empty" << endl;
       }
   }

   int peek()
   {
       if (top >=0 )
       {
           return array[top];
       }
       else
       {
           cout << "Stack is Emmpty " << endl;
           return -1;
       }
   }
   bool isEmpty()
   {
       if (top >= 0) {
           return true;
       }
       else
       {
           return  false;
       }
   }
};
int main()
{
    Stack s(5); // Created an stack of size 5
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();
    cout << "Top of stack " << s.peek() << endl;
    s.pop();
    cout << "Top of stack " << s.peek() << endl;
    s.pop();
    cout << "Top of stack " << s.peek() << endl;
    s.pop();
    cout << "Top of stack " << s.peek() << endl;
    s.pop();

    return 0;
}

