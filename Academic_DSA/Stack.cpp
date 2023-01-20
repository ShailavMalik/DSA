// implementation of stack through array
#include <iostream>
using namespace std;

class Stack
{
    int top;
    int size;
    int *arr;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is already empty" << endl;
            return -1;
        }
        int temp = top;
        top--;
        return arr[temp];
    }

    int getTop()
    {
        return arr[top];
    }

    bool isEmpty()
    {
        if(top==-1)
        return true;
        else 
        return false;
    }
};

int main()
{
    Stack *s = new Stack(4);
    s->push(5);
    s->push(4);
    s->push(3);
    cout<<s->getTop();

    return 0;
}