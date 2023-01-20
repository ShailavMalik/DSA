#include <iostream>
using namespace std;

class CQueue
{
    int front;
    int rear;
    int size;
    int *arr;

public:
    CQueue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[size];
    }

    void enQueue(int data)
    {
        if (front == -1)
            front = rear = 0;
        else if ((front == 0 && rear == size - 1) || front == rear + 1)
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
        }
        else
            rear++;

        arr[rear] = data;
    }

    int deQueue()
    {
        int temp = front;
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else if (front == rear)
            front = rear = -1;
        else if (front == size - 1)
            front = 0;
        else
            front++;

        return arr[temp];
    }

    int getFront()
    {
        return arr[front];
    }
    void display()
    {
        if (front == -1)
            return;
        else if (rear < front)
        {
            for (int i = front; i <= size - 1; i++)
            {
                cout << arr[i] << " --> ";
            }
            for (int i = 0; i <= rear; i++)
            {
                cout << arr[i] << " --> ";
            }
        }
        else
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " --> ";
            }
    }
    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    CQueue *cq = new CQueue(4);
    cq->enQueue(5);
    cq->enQueue(4);
    cq->deQueue();
    cq->display();
    return 0;
}