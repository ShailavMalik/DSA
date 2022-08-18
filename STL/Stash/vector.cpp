#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    for (int i = 0; i < 5; i++)
    {
        int a = i + 1;
        v1.push_back(a);
    }
    cout << "Size of v1: " << v1.size() << endl;
    cout << "capacity of v1: " << v1.capacity() << endl;
    // printing the vector
    for (auto i : v1)
    {
        cout << i << " ";
    }
    return 0;
}