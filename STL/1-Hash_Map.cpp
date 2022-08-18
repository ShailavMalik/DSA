// Program to illustrate use of hash map
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    /*means it has a key of type int
     which has some value of type string */

    m[1] = "ram";
    m[2] = "shyam";

    m.insert({3, "bheem"});

    cout << "Before Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << m.count(1) << endl;
    m.erase(2);
    cout << "After Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
} 