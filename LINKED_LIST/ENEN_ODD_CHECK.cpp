//Linked List Length Even or Odd ?
//Basic Accuracy : 56.34 % Submissions : 48506 Points : 1
//Given a linked list of size N, your task is to complete the function isLengthEvenOrOdd() which contains head of the linked listand check whether the length of linked list is even or odd.
//
//Input :
//	The input line contains T, denoting the number of testcases.Each testcase contains two lines.the first line contains N(size of the linked list).the second line contains N elements of the linked list separated by space.
//
//	Output :
//	For each testcase in new line, print "even"(without quotes) if the length is even else "odd"(without quotes) if the length is odd.
//
//	User Task :
//Since this is a functional problem you don't have to worry about input, you just have to  complete the function isLengthEvenOrOdd() which takes head of the linked list as input parameter and returns 0 if the length of the linked list is even otherwise returns 1.
//
//Constraints :
//	1 <= T <= 100
//	1 <= N <= 103
//	1 <= A[i] <= 103
//
//	Example :
//	Input :
//	2
//	3
//	9 4 3
//	6
//	12 52 10 47 95 0
//
//	Output :
//	Odd
//	Even

// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    if (count % 2 == 0)
    {
        return 0;
    }
    return 1;
}