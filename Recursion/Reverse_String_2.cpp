#include <iostream>
using namespace std;

void revString(string &s, int initial, int final)
{
    if (initial == final)
        return;
    swap(s[initial], s[final]);
    revString(s, initial + 1, final - 1);
}

int main()
{
    string s = "abcde";
    revString(s, 0, 4);
    cout << s;

    return 0;
}