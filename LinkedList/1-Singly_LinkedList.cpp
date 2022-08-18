#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

//********************************************** find length of a linked list **********************************************
int getLength(Node *head)
{
    int len = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

//******************************************************Insertion ******************************************************
void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *newNode = new Node(d);
    // point the pointer next to head
    newNode->next = head;
    // update head
    head = newNode;
}

void insertAtTail(Node *head, int d)
{
    // create new node
    Node *newNode = new Node(d);

    // reach at tail of LL
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *tail = temp;

    // connection update
    tail->next = newNode;
}

void insertAtPos(Node *&head, int pos, int d)
{
    // Step1: creating  new node
    Node *newNode = new Node(d);

    // edgecase1: if to be insert before first node
    if (pos == 1)
    {
        newNode->next = head;
        //  update head
        head = newNode;
        return;
    }
    // Step2: traversing to node just before pos
    Node *temp = head;
    int p = pos - 2;
    while (p--)
    {
        temp = temp->next;
        // pos can be atmax 1 more than current Lenght of LL
        if (temp == NULL)
            cout << "Enter valid position!!";
    }
    // edgecase2: if to be inserted after ending node
    if (temp->next == NULL)
    {
        temp->next = newNode;
        return;
    }
    // step3: Connection update
    newNode->next = temp->next;
    temp->next = newNode;
}

//****************************************************** traverse ******************************************************
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//****************************************************** Deletion ******************************************************
void deleteAtPos(Node *&head, int n)
{
    int p = n;
    Node *temp = head;
    // handling edge cases
    if (n == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }

    while (p - 2 > 0)
    {
        temp = temp->next;
        p--;
    }

    // storing address of node to be deleted in delNode so that it can be freed
    Node *delNode = temp->next;
    // updating connection
    temp->next = temp->next->next;
    // deleting node
    delete delNode;
    // updating tail
}

int main()
{
    Node *head = new Node(1);

        insertAtHead(head, 3);
        insertAtHead(head, 5);
        insertAtHead(head, 8);
        insertAtTail(head, 10);
        insertAtTail(head, 11);

    insertAtPos(head,7,100);
    traverse(head);

    insertAtPos(head, 2, 20);
    traverse(head);
    cout << "Length = " << getLength(head) << endl
         << endl;

    deleteAtPos(head, 1);
    traverse(head);

    deleteAtPos(head, 7);
    traverse(head);
    cout << "Length = " << getLength(head) << endl;

    return 0;
}