#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;

    stack(int size) : size(size)
    {
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        top++; // 0 1
        if (top >= size)
            cout << "Stack Overflow for " << data << endl;
        arr[top] = data;
    }

    void pop()
    {
        if (top == -1)
            cout << "stack is already empty" << endl;
        else
            top--;
    }

    int getTop()
    {
        return arr[top];
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    stack s(2);
    s.push(5);

    cout << s.getTop() << endl;
    cout << s.getSize();

    return 0;
}