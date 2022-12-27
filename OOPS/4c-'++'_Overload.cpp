#include <iostream>
using namespace std;

class person
{
    int age;

public:
    person(int age) : age(age)
    {
    }
    // Default constructor
    person()
    {
        age = 18;
    }

    void operator++()
    {
        cout << "Age = " << age << endl;
    }
    void operator++(int)
    {
        cout << "Age = " << age << endl;
    }
};

int main()
{
    person p;

    ++p;
    p++;

    return 0;
}