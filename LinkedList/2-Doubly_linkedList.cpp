#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int data) : data(data)
    {
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    // create a node
    Node *newNode = new Node(data);

    // update connection
    head->prev = newNode;
    newNode->next = head;

    // update head
    head = newNode;
}

void insertAtTail(Node *&tail, int data)
{
    // creation of node
    Node *newNode = new Node(data);
    // update connection
    tail->next = newNode;
    newNode->prev = tail;
    // update tail
    tail = newNode;
}

void insertAtPos(Node *&head, int n, int data)
{
    Node *temp = head;

    Node *newNode = new Node(data);

    if (n == 1)
    {
        newNode->next = temp;
        temp->prev = newNode;
        // update head
        head = newNode;
        return;
    }

    int p = n;
    while (p - 2 > 0)
    {
        temp = temp->next;
        p--;
    }
    if (temp->next == NULL)
    {
        temp->next = newNode;
        newNode->prev = temp;
        return;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(Node *&head, int n)
{
    Node *temp = head;

    if (n == 1)
    {
        temp->next->prev = NULL;
        // update head
        head = temp->next;
        // free memory at heap
        delete temp;
        return;
    }
    int p = n;
    while (p - 2 > 0)
    {
        temp = temp->next;
        p--;
    }
    // store address of node to be deleted
    Node *delNode = temp->next;
    if (temp->next->next == NULL)
    {
        temp->next = NULL;
        delete delNode;
        return;
    }

    temp->next->next->prev = temp;
    temp->next = temp->next->next;

    delete delNode;
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

int main()
{
    Node *first = new Node(8);
    Node *&head = first;
    Node *tail = first;
    insertAtHead(head, 3);
    insertAtHead(head, 5);
    insertAtHead(head, 15);
    insertAtTail(tail, 50);
    transverse(head);
    insertAtPos(head, 6, 100);
    transverse(head);

    deleteNode(head, 5);
    transverse(head);

    return 0;
}