#include <iostream>
using namespace std;

class human
{
    // class members
private: // access specifier
    int age;
    char gender;

    // class functions
public:
    human(int age, char gender)
    {
        this->age = age;
        this->gender = gender;
    }
    int getAge() // getter function for age
    {
        return age;
    }
    void setAge(int age) // setter function for age
    {
        this->age = age;
    }

    char getGender()
    {
        return gender;
    }
    void setGender(char gender)
    {
        this->gender = gender;
    }
};

main()
{
    cout << sizeof(human) << endl; // concept of padding in classes and structures

    human rohan(18, 'M');

    cout << (int)&rohan << endl;
    cout << (int)(&rohan + 1) << endl;

    cout << rohan.getAge() << endl;
    cout << rohan.getGender() << endl;

    // creating an object dynamically
    human *deepak = new human(23, 'M');

    cout << "sizeof(rohan) = " << sizeof(rohan) << endl;
    cout << "sizeof(deepak) = " << sizeof(deepak) << endl; // it gives size of pointer deepak (which is 4 in my system)

    cout << deepak->getAge() << endl;
    cout << deepak->getGender() << endl;

    cout << "deepak = " << deepak << endl;

    return 0;
}