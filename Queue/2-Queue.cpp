#include <iostream>
using namespace std;

//* Implementation of Queue using array

// Queue follows LIFO principle
class Queue
{
    // data members
    int *arr;
    int size;
    int front;
    int rear;

public:
    // data functions
    Queue(int s)
    {
        arr = new int[size];
        size = s;
        front = rear = -1;
    }

    // insert element at back of the queue
    void enQueue(int data)
    {
        if (rear == size - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        // inserting first element
        if (front == -1)
            rear = front = 0;
        else
            rear++;

        arr[rear] = data;
    }

    // delete element from the front of the queue
    void deQueue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        arr[front] = -1;
        front++;
    }

    bool isEmpty()
    {
        if (front = -1 || front > rear)
            return true;
        else
            return false;
    }

    int getFront()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        else
            return arr[front];
    }

    int getSize()
    {
        return this->size;
    }

    void displayQueue()
    {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " <-- ";
        }
    }
};

int main()
{
    //? dynamic object of class Queue
    Queue *q = new Queue(3);
    q->enQueue(4);
    q->enQueue(8);
    q->enQueue(19);

    cout << q->getFront() << endl;
    q->displayQueue();
    return 0;
}