#include <iostream>
#include "ll.h"
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    Node *head = new Node(0);
    Node *tail = head;
    Node *temp=head;
    for (int i = 0; i < n; i++)
    {
        temp->data = arr[i];
        if (i == n - 1)
            break;
        insertAtTail(tail, 0);
        temp=temp->next;
    }

    traverse(head);

    return 0;
}