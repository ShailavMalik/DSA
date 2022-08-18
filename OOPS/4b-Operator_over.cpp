#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    complex(int real, int imag) : real(real), imag(imag)
    {
    }

    complex()
    {
        real = 0;
        imag = 0;
    }

    complex operator+(complex b)
    {
        complex c;
        c.real = real + b.real;
        c.imag = imag + b.imag;

        return c;
    }

    void print()
    {
        cout << real << " " << imag << "i" << endl;
    }
};

int main()
{
    complex c1(2, 4), c2(10, 9), c3;
    c3 = c1 + c2;
    c3.print();

    return 0;
}