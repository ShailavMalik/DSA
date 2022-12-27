#include <iostream>
using namespace std;

class demo
{
    int cnt = 0;

public:
    void increment()
    {
        cnt += 10;
        if (cnt >= 40)
            throw "limit reached";

        cout << "cnt = " << cnt << endl;
    }
};

int main()
{
    try{
    demo d;
    d.increment();
    d.increment();
    d.increment();
    d.increment();
    }

    catch(const char * text)
    {
        cout<<text<<endl;
    }
    catch(...)
    {
        cout<<"This is what I wanted"<<endl;
    }

        return 0;
}