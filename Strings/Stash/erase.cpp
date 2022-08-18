#include <iostream>
using namespace std;

int main()
{
    string s = "I, am : $ % shailav";
    cout << s << endl;
    cout << s.length() << endl;
    int n = s.length();
    s.erase(0, 10);
    cout << s << endl;
    cout << s.length();

    return 0;
}