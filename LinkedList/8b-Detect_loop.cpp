#include <iostream>
#include "ll.h"
using namespace std;

 Node *detectCycle(Node *head) {
        Node *slow=head;
        Node *fast=head;
        Node *meet=NULL;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
            meet=fast;
            return;
    }
        cout<<meet->data<<endl;
        //means it has not been updated
       if(meet==NULL)
           return NULL;
        
        
    //reset slow to head;
        slow=head;
        
        while(1)
        {
        if(slow==fast)
        cout<<"here"<<endl;
            return slow;
        slow=slow->next;
        fast=fast->next;
        }     
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
    cout<<detectCycle(head)->data<<endl;
 
    return 0; 
}