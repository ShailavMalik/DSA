#include <iostream>
#include "ll.h"
using namespace std;

Node *removeZeroSumSublists(Node *head)
{
    Node *firstNode = head;
    Node *temp = head;
    Node *prev = NULL;
    Node *Next = NULL;
    bool flag = 0;
    while (head != NULL)
    {
        int sum = 0;
        flag = 0;
        while (temp != NULL)
        {
            sum += temp->data;
            if (sum == 0)
            {
                Next = temp->next;
                // if firstNode is to be deleted
                if (head == firstNode)
                {
                    firstNode = Next;
                }
               // setup link in between prev and Next
                else
                    prev->next = Next;


                flag = 1;
                head = firstNode;
                break;
            }

            temp = temp->next;
        }

        if (flag == 0) // no change
        {
            // prev is to track node just behind head
            prev = head;
            head = head->next;
        }
        temp = head;
    }

    return firstNode;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    insertAtTail(tail, 2);
    insertAtTail(tail, -3);
    insertAtTail(tail, 3);
    insertAtTail(tail, 1);
    traverse(head);

    head = removeZeroSumSublists(head);
    traverse(head);

    return 0;
}