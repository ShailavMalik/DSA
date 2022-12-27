#include <iostream>
#include <fstream>
#include <string>


using namespace std;
 
int main() 
{
    char ch;
ifstream infile("new.txt");
ofstream outfile("text.txt");

while(infile)
{
    infile.get(ch);
    outfile.put(ch);
}

infile.close();

    
 
    return 0; 
}