#include <iostream>
//#include "ll.h"
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtTail(Node *&tail, int d)
{
    // create new node
    Node *newNode = new Node(d);
    // point the pointer next of tail to current node
    tail->next = newNode;
    // update tail
    tail = newNode;
}

void transverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *reverseInK(Node *head, int k)
{
    // empty list
    if (head == NULL)
        return NULL;

    Node *curr = head;
    Node *Next = curr->next;
    Node *prev = NULL;
    int count = 0;
    Node *temp = curr;

    // check if k nodes exist in this particular function call
    while (temp != NULL && count < k)
    {
        temp = temp->next;
        count++;
    }
    cout << count << endl;
    // Step 1: reverse first k nodes
    if (count == k)
    {
        for (int i = 0; i < k; i++)
        {
            Next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = Next;
        }
    }
    else
        return head;

    // next pointer will be pointing at the head of the remaining list

    if (curr != NULL)
    {
        // step2:recursion will get ans for remaining list
        Node *rem = reverseInK(Next, k);
        // step3: connection list in step 1 and step 3
        head->next = rem;
    }

    // step 4: return head of entire list
    return prev;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    transverse(head);

    head = reverseInK(head, 2);
    transverse(head);

    return 0;
}