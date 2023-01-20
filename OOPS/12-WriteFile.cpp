#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outfile("new.txt");
    // if file is opened successfully
    if (outfile)
    {
        string str;
        getline(cin, str);
        outfile << str;
    }

    return 0;
}