#include <iostream>
using namespace std;

void countReverse(int n)
{
    // base condition
    if (n == 0)
        return;
    // processing
    cout << n << " ";
    // recursive relation
    countReverse(n - 1);
} // recursive relation comes in end so it is tail recursion

void countUpto(int n)
{
    // base condition
    if (n == 0)
        return;

    // recursive relation
    countUpto(n - 1);
    // processing
    cout << n << " ";
} // recursive relation comes before so it is head recursion

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    countReverse(n);
    cout << "\n \n";
    countUpto(n);

    return 0;
}