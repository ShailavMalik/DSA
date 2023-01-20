#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream ob;
    string s;
    ob.open("new.txt");
    char ch;
    while (1)
    {
        if (!getline(ob, s))
            break;
        cout << s;
    }

    return 0;
}