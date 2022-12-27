//* Program to show runtime polymorphism (function overriding)

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    virtual void print()
    {
        cout << "print A" << endl;
    }

    void show()
    {
        cout << "show A" << endl;
    }
};

class B : public A
{
public:
    void print()
    {
        cout << "print B" << endl;
    }

    void show()
    {
        cout << "show B" << endl;
    }
};

int main()
{
    A *ob;
    B object;
    ob = &object;
    ob->print();
    ob->show();

    return 0;
}