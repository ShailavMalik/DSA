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

void insertAtBottom(stack<int> &s, int data, int cnt, int totalSize)
{
    if (s.size() == totalSize - cnt)
    {
        s.push(data);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s, data, cnt, totalSize);
    s.push(top);
}

void reverseStack(stack<int> &s, int cnt)
{
    if (cnt == 0)
        return;
    int top = s.top();
    insertAtBottom(s, top, cnt,s.size());
    s.pop();
    reverseStack(s, cnt - 1);
    // s.push(top);
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

    int n = s.size();
    reverseStack(s, n);
    // insertAtBottom(s, 0);

    printStack(s);

    return 0;
}