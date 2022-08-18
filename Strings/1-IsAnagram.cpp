// Program to check if a string is anagram of other or not
#include <iostream>
#include <string>
using namespace std;

// This function works only for lower case characters
bool isAnagram(string s1, string s2)
{
    int freq[26] = {0};
    // Increasing frequency of alphabet if it exist in string s1
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        freq[index]++;
    }

    // Decrementing frequency of alphabet if it exists in string s2
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s2[i] - 'a';
        freq[index]--;
    }

    int cnt = 0;
    // checking if frequecy of all alphabets has reduces to 0
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
            cnt++;
    }

    if (cnt == 26)
        return true;
    else
        return false;
}

int main()
{
    string s1 = "abcde";
    string s2 = "edcba";
    cout << isAnagram(s1, s2);

    return 0;
}