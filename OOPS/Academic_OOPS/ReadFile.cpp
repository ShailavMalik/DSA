#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ob("new.txt");

    if (!ob)
    {
        cout << "Error in opening file" << endl;
        return -1;
    }

    while (1)
    {
        string str;
        ob >> str;
        if (ob)
        {
            break;
        }

        cout << str;
    }

    return 0;
}