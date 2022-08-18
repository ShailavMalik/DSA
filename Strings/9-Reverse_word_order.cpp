// Program to reverse order of words in a string
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void revWord(string &s)
{
    string temp;
    reverse(s.begin(), s.end());
    int start=0;
    for (int i = 0; i < s.length() + 1; i++)
    {
        if (s[i] != ' ' && s[i] != '\0')
        {
            temp.push_back(s[i]);
        }
        else
        {
            reverse(temp.begin(),temp.end());
            s.replace(start,temp.length(),temp);
            temp.erase();
            start=i+1;
        }
    }
}

int main()
{
    string s1 = "My name is Shailav";
    revWord(s1);
    cout<<s1;

    return 0;
}