#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(4);
    q.push(9);
    q.push(7);
    for (int i = 0;q.size()!=0; i++)
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}