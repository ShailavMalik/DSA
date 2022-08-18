#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    // converting alphabets to lowercase
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    string str;
    for (int i = 0; i < s.length(); i++)
    {
        // store lower case alphabets in a separate array
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            str.push_back(s[i]);
        }
    }
    int count = 0;
    int st = 0, e = str.length() - 1;
    while (st < e)
    {
        if (str[st] != str[e])
        {
            count++;
        }
        st++;
        e--;
    }
    if (count == 0)
        return true;
    else
        return false;
}

int main()
{
    string s1 = "0P";
    cout << isPalindrome(s1);

    return 0;
}