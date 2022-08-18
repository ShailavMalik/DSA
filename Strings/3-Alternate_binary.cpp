// Program to find min no. of flips required to make 0s and 1s at alternate positions
#include <iostream>
using namespace std;

char flip(char expected)
{
    if (expected == '0')
        return '1';
    else
        return '0';
}
int getflips(string s, char expected)
{
    int cntflips = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != expected)
        {
            cntflips++;
        }
        expected = flip(expected);
    }
    return cntflips;
}

int main()
{
    string str = "001111100";
    // no of flips required if ans start with 0
    int ans1 = getflips(str, '0');
    // no of flips required if ans start with 1
    int ans2 = getflips(str, '1');
    cout << min(ans1, ans2);
    return 0;
}