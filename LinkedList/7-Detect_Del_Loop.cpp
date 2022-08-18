#include <iostream>
#include "ll.h"
using namespace std;

Node *detectLoop(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *slow = head;
    Node *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

void deleteLoop(Node *head)
{
    if (detectLoop(head) == NULL)
    {
        return;
    }
    Node *fast = detectLoop(head);
    //cout<<fast->data<<endl;
    Node *slow = head;
    Node *beginning;
    while (1)
    {
        if (slow == fast)
        {
            beginning = slow;
            break;
        }
        slow = slow->next;
        fast = fast->next;

        
    }

    Node *temp = beginning;
    while (temp->next != beginning)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    Node *temp = tail;
    //insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    
    insertAtTail(tail, 3);
    //insertAtTail(tail, 5);
    // nsertAtTail(tail, 6);
    tail->next = temp;
    //transverse(head);
    // cout<<detectLoop(head);
    deleteLoop(head);
    transverse(head);

    return 0;
}