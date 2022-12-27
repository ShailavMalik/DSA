#include <iostream>
using namespace std;

struct DLLNode
{
    int data;
    DLLNode *prev;
    DLLNode *next;

    DLLNode(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void printDLL(DLLNode *&head)
{
    DLLNode *temp = head;
    for (; temp != NULL; temp = temp->next)
    {
        cout << temp->data << " --> ";
    }
    free(temp);
}

void insertAtBeginning(DLLNode *&head, int data)
{
    DLLNode *cur = new DLLNode(data);
    cur->next = head;
    head = cur;
}

int main()
{
    DLLNode *head = new DLLNode(4);

    insertAtBeginning(head, 8);
    insertAtBeginning(head, 0);
    insertAtBeginning(head, -8);

    printDLL(head);

    return 0;
}