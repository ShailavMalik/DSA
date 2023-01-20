#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream ob("file.txt");
    string s="Shailav Malik";
    ob<<s;

    return 0;
}