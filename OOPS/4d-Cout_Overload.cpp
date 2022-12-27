#include <iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;
    string address;
    bool isMarried;

public:
    person(string naam, int umar, bool sathiHogi, string pta) : name(naam), age(umar), isMarried(sathiHogi), address(pta)
    {
    }

};

void operator<< (ostream& os,person& p)
    {
        cout << p.name << endl;
        cout << p.age << endl;
        cout << p.isMarried << endl;
        cout << p.address << endl;
    }
int main()
{
    person p1("Raman",19,false,"New Delhi");
    cout<<p1;

    return 0;
}