#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void insertSorted(stack<int> &st, int data)
{
    if (st.empty() || data > st.top())
    {
        st.push(data);
        return;
    }
    int top = st.top();
    st.pop();
    insertSorted(st, data);
    st.push(top);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
        return;
    int top = st.top();
    st.pop();
    sortStack(st);
    insertSorted(st, top);
}

int main()
{
    stack<int> st;
    st.push(3);
    st.push(6);
    st.push(0);
    st.push(1);
    st.push(5);
    printStack(st);
    sortStack(st);

    printStack(st);

    return 0;
}