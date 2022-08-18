#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void InsertAtHead(Node &head, int n)
{
    Node newNode(n);
    newNode.next=&head;
    head=newNode;
}

main()
{
    // creation of first Node
    // 1st object of class Node
    Node first(1);
    Node &head=first;
    InsertAtHead(head,5);

    return 0;
}