#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    // inserting values
    m["shailav"] = 10;
    m.insert({"sonal", 20});
    // accessing values by key
    // cout << m["shailav"] << endl;
    // cout << m["sonal"];
    pair<string, int> p = make_pair("rahul", 40);
    m.insert(p);
    // cout << endl
    //  << m["rahul"];
    // cout << m.empty() << endl;
    // cout << m.size() << endl;
    m.erase("rahul");
    // cout << m.size();
    // cout << endl
    //  << m.count("shaila");

    // m.clear();

    // cout << endl
    //  << m["sonal"];
    unordered_map<string, int>::iterator itr = m.find("shailav");
    if (itr != m.end())
        cout << "the element is present" << endl;
    else
        cout << "the element is not present" << endl;

    cout << (*itr).first << endl;
    itr++;
    cout << (*itr).first << endl;

    return 0;
}