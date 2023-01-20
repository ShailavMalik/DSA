#include <iostream>
using namespace std;

// generic function using STL
template <typename b> // class b can also be used
void print(b a)
{
    cout << "This is a generic function" << endl;
}

int main()
{
    int n = 8;
    print<int>(n);

    return 0;
}