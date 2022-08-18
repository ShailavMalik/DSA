// nth fibonacci by recursion
#include <iostream>
using namespace std;
typedef long long ll;

ll nth_Fibonacci(ll n)
{
    // base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // recursive relation
    ll ans = nth_Fibonacci(n - 1) + nth_Fibonacci(n - 2);
    return ans;
}

int main()
{
    ll n=5;
    cout<<"Enter the value of n: "; 
    cin>>n;
    cout<<nth_Fibonacci(n);

    return 0;
}