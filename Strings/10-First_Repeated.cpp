#include <iostream>
#include <map>
using namespace std;

char firstRep(string s)
{
    map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] > 1)
            return s[i];
    }

    return '#';
}

int main()
{
    string s1 = "lk;afjadfkkjakns;jk";
    cout << firstRep(s1);

    return 0;
}