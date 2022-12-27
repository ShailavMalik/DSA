#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear;
    int *arr;
    int size;

public:
    Queue(int s)
    {
        size = s;
        front = rear = -1;
        arr = new int[s];
    }

    //?insert at back of queue
    void enQueue(int data)
    {
        // overflow
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == front - 1))
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        // first element
        else if (front == -1)
        {
            front = rear = 0;
        }
        // circular queue
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        // normal case
        else
        {
            rear++;
        }

        arr[rear] = data;
    }

    //?remove from front of queue
    void deQueue()
    {
        // underflow
        if (front == -1)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        // only one element in Queue
        else if (front == rear)
            front = rear = -1;
        // circular queue
        else if (front == size - 1)
            front = 0;
        // normal case
        else
            front++;
    }

    int getFront()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
            return this->arr[front];
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    int getSize()
    {
        return size;
    }

    void displayQueue()
    {
        cout << "Queue"
             << ": ";
        if (rear >= front)
        {

            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << "<---";
            }
        }
        if (front > rear)
        {
            for (int i = 0; i < front; i++)
            {
                cout << arr[i] << "<--";
            }
        }
    }
};

int main()
{
    // dynamic object of class Queue
    Queue *q = new Queue(3);
    q->enQueue(5);
    q->enQueue(9);
    q->deQueue();
    q->deQueue();
    q->enQueue(3);

    cout << q->getFront() << endl;

    q->displayQueue();

    return 0;
}