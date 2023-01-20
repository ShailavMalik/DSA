//* Program to open a file using open() method and reading a file character by character
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    string file;
    cout<<"Enter file to be opened: ";
    cin>>file;
    
    // infile.open(file);
    while (!infile.eof())
    {
        char ch;
        infile.get(ch);
        cout << ch;
    }

    return 0;
}