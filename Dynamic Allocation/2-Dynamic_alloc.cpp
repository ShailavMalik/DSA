#include <iostream>
using namespace std;

int main()
{
    // creating a variable in heap
    int *num = new int;

    cout << "Address of num: " << num << endl;
    *num = 8;
    cout << "num = " << *num << endl;
    // deallocating memory
    delete num;
    cout << "Now, Address of num: " << num << endl;
    cout << *num << endl;

    *num = 10;
    cout << "num = " << *num << endl;

    return 0;
}