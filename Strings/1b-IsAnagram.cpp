// Program to check if a string is anagram of other
#include <iostream>
using namespace std;

bool isAnagram(string s1, string s2)
{
    int freq[200] = {0};
    // Increasing frequency of alphabet if it exist in string s1
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i]]++;
    }
    // Decrementing frequency of alphabet if it exists in string s2
    for (int i = 0; i < s2.length(); i++)
    {
        freq[s2[i]]--;
    }

    int cnt = 0;
    // checking if frequecy of all alphabets has reduces to 0
    for (int i = 0; i < 200; i++)
    {
        if (freq[i] == 0)
            cnt++;
    }

    if (cnt == 200)
        return true;
    else
        return false;
}

int main()
{
    string s1 = "9MofO/an$";
    string s2 = "M9ofO/$an";
    cout << isAnagram(s1, s2);

    return 0;
}