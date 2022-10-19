#include <iostream>
using namespace std;

class students
{

    int rollNo;

    // access modifiers
public:
    // Data Members
    string name;
    int age;

    // Member Functions
    void setRollNo(int rollNo)
    {
        /*  'this' keyword refers to the current object in a method or constructor */
        // this' keyword refers to the current object in a method or constructor
        this->rollNo = rollNo;
    }

    void getRollNo()
    {
        cout << 
        +this->rollNo << endl;
    }
};

int main()
{
    // Object
    // an instance of a class
    students s1;

    s1.age = 18;
    cout << "s1.age = " << s1.age << endl;

    s1.setRollNo(35);
    s1.getRollNo();

    return 0;
}