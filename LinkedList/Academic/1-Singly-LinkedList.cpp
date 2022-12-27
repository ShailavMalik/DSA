#include <iostream>
using namespace std;

struct listNode
{
    int data;
    listNode *next;

    listNode(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//* Transversal
void printList(listNode *&head)
{
    for (listNode *cur = head; cur != NULL; cur = cur->next)
    {
        cout << cur->data << " --> ";
    }
}
// * Insertion
void insertAtBeginning(listNode *&head, int data)
{
    listNode *cur = new listNode(data);
    cur->next = head;
    head = cur;
}

void insertAtEnd(listNode *&head, int data)
{
    listNode *tail;
    // transverse to the end of list
    for (listNode *temp = head; temp != NULL; temp = temp->next)
    {
        tail = temp;
    }

    listNode *cur = new listNode(data);
    tail->next = cur;
}

void insertAtGivenPosition(listNode *&head, int data, int pos)
{
    if (pos < 1)
    {
        cout << "Enter valid position" << endl;
        return;
    }

    //! inserting at first position of list
    if (pos == 1)
    {
        insertAtBeginning(head, data);
        return;
    }

    int count = 1;
    listNode *specified;
    // transverse to the specified position
    for (listNode *temp = head; count != pos; temp = temp->next)
    {
        if (temp == NULL)
        {
            cout << "Enter valid position" << endl;
            return;
        }

        specified = temp;
        count++;
    }

    listNode *cur = new listNode(data);
    cur->next = specified->next;
    specified->next = cur;
}

//* Deletion

int deleteFirst(listNode *&head)
{
    if (head == NULL)
    {
        cout<<"List is Empty"<<endl;
        return -1;
    }

    listNode *temp = head;

    head = head->next;

    int tempVar = temp->data;
    free(temp);
    return tempVar; 
}

int deleteLast()
{
    //traverse to the end of the list
}

int main()
{
    listNode *head = new listNode(3);
    insertAtBeginning(head, 5);
    insertAtEnd(head, 9);
    insertAtBeginning(head, 0);
    insertAtGivenPosition(head, 14, 4);
    insertAtGivenPosition(head, 20, 1);
    insertAtGivenPosition(head, 50, 7);

    printList(head);

    return 0;
}