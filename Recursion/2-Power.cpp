#include <iostream>
using namespace std;

int power(int m, int n) // m^n
{
    // base condition
    if (n == 0)
        return 1;

    // recursive relation
    return m * power(m, n - 1);
}

int main()
{
    int m,n;
    cout<<"Enter the value of m & n: "; 
    cin>>m>>n;
    cout<<power(m,n);

    return 0;
}