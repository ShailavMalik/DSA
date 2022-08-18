#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

string removeOccurrences(string s, string part)
{
    int found = s.find(part);
    while (found != string::npos)
    {
        s.erase(found, part.length());
        found = s.find(part);
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc"; // dabaabcbc
    string part = "abc";
    cout << removeOccurrences(s, part);

    return 0;
}