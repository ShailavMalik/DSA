#include <iostream>
using namespace std;

class complex
{
    int r, i;

public:
    complex(int r = 0, int i = 0) : r(r), i(i)
    {
    }

    // Operator overloading
    // '+' when used with any object of the class it adds n to both class members 'r' and 'i'
    // but we have to write a+5 (and not 5+a)
    void operator+(int n)
    {
        r = r + n;
        i = i + n;
    }

    void print()
    {
        cout << r << " + " << i << "i" << endl;
    }
};

int main()
{
    complex a(2, 3), b(4, 9);
    // 5+a;
    // This doesn't work because in case of binary operator first operand is non-immutable(it has to be type current object)
    a + 5;
    b + 10;
    a.print();
    b.print();

    return 0;
}