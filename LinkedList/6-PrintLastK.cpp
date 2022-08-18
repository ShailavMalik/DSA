#include <iostream>
#include "ll.h"
using namespace std;

int countFromLast(Node *head,int k)
{
    if(head==NULL)
    return 0;
    int count=0;
    Node* temp=head;
    
    countFromLast(head->next,k);
    if(count==k)
    {
        return head->data;
    }
    count++;
}
 
int main() 
{
     Node *first = new Node(1);
    Node *&head = first;
    Node *tail = first;

{
    insertAtHead(head, 3);
    insertAtHead(head, 5);
    insertAtHead(head, 8);
    insertAtTail(tail, 10);
    insertAtTail(tail, 11);
}

transverse(head);
cout<<countFromLast(head,2);

    
 
    return 0; 
}