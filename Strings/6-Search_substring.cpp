#include <iostream>
#include <cstring>
using namespace std;

bool isExist(string sb, string arr)
{
    int found = arr.find(sb);
    if (found != string::npos)
        return true;
    else
        return false;
}

int main()
{
    string s1 = "shailav";
    string arr = "ma";
    cout << isExist(arr, s1);

    return 0;
}