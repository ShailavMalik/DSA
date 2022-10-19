#include <iostream>
#include <stack>
using namespace std;

int getMiddle(stack<int> &s, int &totalSize)
{
    // cout << s.size() << " ";
    if ((totalSize / 2) + 1 == s.size())
    {

        // cout << s.top() << endl;
        // return;

        return s.top();
    }
    int top = s.top();
    s.pop();

    int ans = getMiddle(s, totalSize);
    s.push(top);

    return ans;
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(8);
    s.push(15);
    s.push(9);
    s.push(5);
    s.push(50);
    int n = s.size();
    cout << endl
         << "Middle = " << getMiddle(s, n);
    // getMiddle(s, n);

    cout << endl
         << s.size() << endl;

    return 0;
}