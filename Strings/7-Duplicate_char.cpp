#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;
char firstRep(string s)
{
    unordered_map<char,int> freq;
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++; 
    }
    
    

    return -1;
}

int main()
{
    string str="geeksforgeeks";
    cout<<firstRep(str);

    return 0;
}