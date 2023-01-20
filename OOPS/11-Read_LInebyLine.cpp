//* Program to open a file using constructor and reading it line by line and 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    ifstream fin("new.txt");

    while(getline(fin,str))
    {
        getline(fin,str);
        cout<<str;
    }

   

    return 0;
}