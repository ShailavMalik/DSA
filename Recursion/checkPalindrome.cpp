#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int initial, int final)
{
    if (initial == final)
        return true;
    if (s[initial] != s[final])
        return false;
    isPalindrome(s, initial + 1, final - 1);
}

int main()
{
    string string;
    cout << "Enter string :";
    cin >> string;

    int final = string.size() - 1;
    if (isPalindrome(string, 0, final))
        cout << "It is palindrome";
    else
        cout << "It is not palindrome";

    return 0;
}