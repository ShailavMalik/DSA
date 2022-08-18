#include <iostream>
using namespace std;

void revString(string &s, int initialIndex, int finalIndex)
{
    if (finalIndex < 0)
        return;
    char ch = s[initialIndex];
    revString(s, initialIndex + 1, finalIndex - 1);
    s[finalIndex] = ch;
}

int main()
{
    string s = "abcde";
    revString(s, 0, 4);
    cout << s;

    return 0;
}