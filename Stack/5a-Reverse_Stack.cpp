#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s,data);
    s.push(top);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
        return;
    int top = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, top);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    printStack(s);
    reverseStack(s);

    printStack(s);

    return 0;
}