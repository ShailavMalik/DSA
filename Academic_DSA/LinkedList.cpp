#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtBeginning(Node *&head, int d)
{
    Node *newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *head, int d)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(d);
    temp->next = newNode;
}

void insertAtPos(Node *head, int pos, int d)
{
}

int deleteAtBeginning(Node *head)
{
}

int deleteAtEnd(Node *head)
{
}

int deleteAtPos(Node *head, int pos)
{
}

void display(Node *head)
{
    Node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(8);
    insertAtBeginning(head, 9);
    insertAtBeginning(head, 10);
    cout << "Hi" << endl;
    display(head);

    return 0;
}