// Playing with map
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 5, 9, 3, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    map<int, int> m1;
    m1 = {{1, 2},
          {5, 3},
          {4, 9}};

    // inserting another key
    m1.insert({8, 0});

    // changing the value of a key
    m1[4] = 1;

    // accessing value of a particular key
    cout << m1[1] << endl;

    // printing entire map values
    for (auto i : m1)
    {
        cout << i.first << " : " << i.second << endl;
    }

    return 0;
}