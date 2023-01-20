#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int s)
    {
        arr = new int[s];
        size = s;
        front = rear = -1;
    }

    void enQueue(int d)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
            front = rear = 0;
        else
            rear++;
        arr[rear] = d;
    }

    int deQueue()
    {
        int temp = front;
        if (front == -1)
        {
            cout << "Queue is already empty" << endl;
            return -1;
        }
        else if (front == rear)
        {
            front = rear = -1;
            return arr[temp];
        }
        else
        {
            front++;
            return arr[temp];
        }
    }

    int getFront()
    {
        return front;
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " --> ";
        }
    }
};

int main()
{
    Queue q(3);
    q.enQueue(5);
    q.enQueue(4);
    q.enQueue(3);
    q.deQueue();
    q.deQueue();

    q.display();

    return 0;
}