#include <iostream>
using namespace std;

class person
{
    string name;
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
};

int main()
{
    person p;
    int s;
    ++p;

    return 0;
}