// visualisation
// https://cutt.ly/7HJgB7i
#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int &b = a;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    // Adress of a & b will be same as b is only
    // a reference to a and no other memory is given to b

    return 0;
}