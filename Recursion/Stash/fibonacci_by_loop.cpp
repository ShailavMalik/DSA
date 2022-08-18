// nth fibonacci term using loop
#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cout << "Enter the value of n: ";
    cin >> n;
    ll a = 0;
    ll b = 1;
    ll c;
    for (ll i = 0; i <= n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << " ";
    return 0;
}