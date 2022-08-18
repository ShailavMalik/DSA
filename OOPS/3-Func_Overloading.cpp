#include <iostream>
using namespace std;

class demo
{
private:
    int x;
    int y;

public:
// check function is overloaded
    int check()
    {
        return 1;
    }

    int check(int n)
    {
        return 2;
    }
};

int main()
{
    demo d1;
    cout << d1.check() << endl;
    cout << d1.check(4) << endl;

    return 0;
}