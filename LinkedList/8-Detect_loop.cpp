
#include <iostream>
#include <unordered_map>
#include "ll.h"
using namespace std;

bool detectLoop(Node *head)
{
    unordered_map<Node *, int> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == 1)
        {
            return true;
        }
        visited[temp]++;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    Node *temp = tail;
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    tail->next = temp;
    cout<<detectLoop(head);

    return 0;
}