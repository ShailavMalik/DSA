#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s.push(num);
    }

    printStack(s, n);

    cout << endl
         << s.top() << endl;

    return 0;
}