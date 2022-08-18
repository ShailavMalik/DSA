#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // v = {10, 20}; // Like array, can store values in vector like this
    v.push_back(30); // can also use push_back() function to store values to vector
    // v[0] = 100;
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    // Using this method in STL we can access all the elements stored in vector
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;
    // Like array, elements can also be accessed using v[i]
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}