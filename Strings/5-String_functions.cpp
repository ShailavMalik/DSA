// Program to illustrate some in-built functions in strings
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "Shailav";
    char s2[10];

    // strcpy(dest,src) copies src string to dest string
    strcpy(s2, s1);

    // strlen() function gives the no. of characters
    // in a string excluding null character
    cout << strlen(s1) << endl;

    cout << "string s1:  " << s1 << endl;
    cout << "sizeof(s1): " << sizeof(s1) << endl
         << endl;
    cout << "string s2: " << s2 << endl;
    cout << "sizeof(s2): " << sizeof(s2) << endl;

    // strcmp() compares two strings and return 0 if
    // they are equal and any other integer if not equal
    cout << strcmp(s1, s2) << endl; // equal
    cout << strcmp(s1, "shailav");  // not-equal

    return 0;
}