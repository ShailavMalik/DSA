#include <iostream>
#include <fstream>
using namespace std;
 
int main() 
{
    ifstream infile("new.txt");
    ofstream outfile("file.txt");

    while(!infile.eof())
    {
        char ch;
        infile.get(ch);
        outfile.put(ch);
    }

    // iostream obj();

 
    return 0; 
}