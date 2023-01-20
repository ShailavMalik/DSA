// implementation of stack through array
#include <iostream>
using namespace std;

class Stack
{
    public:
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
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

void insertAtBottom(Stack &s, int num)
{
    if (s.isEmpty())
    {
        s.push(num);
        return;
    }
    int el=s.pop();
    insertAtBottom(s, num);
    s.push(el);
}

void reverseStack(Stack &s)
{
    if (s.isEmpty())
        return;
    int num = s.pop();
    reverseStack(s);
    insertAtBottom(s, num);
}

int main()
{
    Stack s(5);
    s.push(5);
    s.push(4);
    s.push(3);
    cout << s.getTop() << endl;
    reverseStack(s);

    cout << s.getTop();

    

    return 0;
}