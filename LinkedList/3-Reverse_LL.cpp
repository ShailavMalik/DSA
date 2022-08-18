#include <iostream>
#include "ll.h"
using namespace std;

// using recursion
void reverseList(Node *&curr, Node *prev = NULL)
{
  if (curr == NULL)
  {
    curr = prev;
    return;
  }
  Node *Next = curr->next;
  curr->next = prev;
  prev=curr;
  curr=Next;
  reverseList(curr, prev);
}

int main()
{
  Node *head = new Node(1);
  Node *tail = head;
  insertAtTail(tail, 2);
  insertAtTail(tail, 3);
  insertAtTail(tail, 4);
  insertAtTail(tail, 5);
  insertAtTail(tail, 6);
  transverse(head);

  reverseList(head);
  transverse(head);

  return 0;
}