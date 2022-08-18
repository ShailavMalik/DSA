#include <iostream>
using namespace std;

int factorial(int n)
{
    //base condition
    if (n == 1)
        return 1;

    // recursive relation
    return n * factorial(n - 1);
}

int main()
{
    int n=5;
    cout<<"Enter the value of n: "; 
    cin>>n;
    cout<<factorial(n);

    return 0;
}