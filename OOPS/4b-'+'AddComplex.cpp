#include <iostream>
using namespace std;

class complex
{
public:
    int real;
    int imaginary;

    // constructor
    complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void printComplex()
    {
        cout << real << " + i" << imaginary << endl;
    }

    //* single arguement is required if operator is overloaded inside class
    void operator^(complex c)
    {
        //? or void operator^(int n )
        // doesn't make any difference
        cout << "Shailav" << endl;
    }

    complex operator+(complex c2)
    {
        complex c3;
        c3.real = real + c2.real;
        c3.imaginary = imaginary + c2.imaginary;
        return c3;
    }
};

//* two arguements are required if operator is overloaded outside class
// complex operator+(complex c1, complex c2)
// {
//     complex c3;
//     c3.real = c1.real + c2.real;
//     c3.imaginary = c1.imaginary + c2.imaginary;
//     return c3;
// }

int main()
{
    complex a(5, 11), b(3, 10), c;
    c = a + b;
    c.printComplex();
    a ^5;
    //! 1^a;
    //! This doesn't work because in case of binary operator
    //! first operand is non-immutable (it has to be type current object)

    return 0;
}
