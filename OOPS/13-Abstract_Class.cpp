#include <iostream>
using namespace std;

class Vehicle
{
    int cnt;

public:
    virtual void speed()=0;
};

class TwoWheeler : public Vehicle
{
public:
    void speed()
    {
        cout << "This is inside TwoWheeler speed" << endl;
    }
};

int main()
{
    Vehicle *a;
    TwoWheeler b;
    a = &b;
    a->speed();

    return 0;
}