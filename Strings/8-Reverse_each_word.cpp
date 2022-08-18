// Program to reverse each words in a string
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void revWord(string &s)
{
    string temp;
    int start = 0;
    for (int i = 0; i < s.length() + 1; i++)
    {
        if (s[i] != ' ' && s[i] != '\0')
        {
            temp.push_back(s[i]);
        }
        // this will be executed after storing one complete word in temp
        else
        {
            reverse(temp.begin(), temp.end());
            // This replaces rev word with original word
            s.replace(start, temp.length(), temp);
            temp.erase();
            start = i + 1;
        }
    }
}

int main()
{
    string str = "My name is Shailav";
    revWord(str);
    cout << str;

    return 0;
}