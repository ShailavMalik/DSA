#include <iostream>
using namespace std;

int waysToClimb(int n)
{
    // base case
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
        
    // recursive relation
    return waysToClimb(n - 1) + waysToClimb(n - 2);
}

int main()
{
    cout << waysToClimb(5);

    return 0;
}