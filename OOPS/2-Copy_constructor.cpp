// *constructor overloading and copy constructor

#include <iostream>
using namespace std;

class human
{
    // class members (properties)
private:
    string name;
    char gender;
    int age;
    int workExperience;

    // class functions (behaviour)
public:
    // Default constructor
    human()
    {
        cout << "Default Constructor called" << endl;
    }

    human(string name, char gender, int age, int workExperience)
        : gender(gender), name(name), age(age), workExperience(workExperience)
    {
        cout << "Parameterised 2 Constructord called" << endl;
    }
    // Copy constructor
    human(human &h)
    {
        cout << "copy constructor called" << endl;
        name = "Ram";
        gender = h.gender;
        age = h.age;
        workExperience = h.workExperience;
    }
    string getName()
    {
        return name;
    }

    char getGender()
    {
        return gender;
    }

    int getAge()
    {
        return age;
    }

    int get_WorkExperience()
    {
        return workExperience;
    }

    ~human()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    human h1("Mohan", 'M', 24, 1);

    cout << h1.getName() << endl;
    cout << h1.getGender() << endl;
    cout << h1.getAge() << endl;
    cout << h1.get_WorkExperience() << " year(s)" << endl;

    cout << endl;
    human h2;
    cout << endl;

    {
        human h3(h1);
        cout << h3.getName() << endl;
        cout << h3.getGender() << endl;
        cout << h3.getAge() << endl;
        cout << h3.get_WorkExperience() << " year(s)" << endl;
    }

    human *h4 = new human();
    // destructor for dynamically allocated object does call automatically
    delete h4;

    return 0;
}