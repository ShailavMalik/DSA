#include <iostream>
#include <fstream>
using namespace std;
 
int main() 
{
    char ch;
    
    ifstream infile("new.txt");
while(!infile.eof())
{
infile.get(ch);
cout<<ch;

}
 
    return 0; 
}