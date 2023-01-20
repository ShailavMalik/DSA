#include <iostream>
using namespace std;

class counter
{
    int cnt;

public:
    counter()
    {
        cnt = 0;
    }

    counter(int i)
    {
        cnt = i;
    }

    // pre increment
    counter operator++()
    {
        ++cnt;
        return *this;
    }

    // post increment
    counter operator++(int)
    {
        counter temp=*this;
        // copy object 'counter' to a new object 'temp' and then increment the cnt (update the object) 
        // and return temp as it contains previous state of counter.
        // in this way cnt is updated after function call but has already assigned prvious value of cnt.
        cnt++;
        return temp;
    }

    void showData()
    {
        cout << cnt << endl;
    }
};

int main()
{
    counter b, c, d, e;
    c = b++;
    c.showData();
    b.showData();

    e = ++d;
    d.showData();
    e.showData();

    return 0;
}