#include <iostream>
using namespace std;

// Brute force, O(n)
bool isPrime_B1(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i < num; i++) // i< num
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Brute force, O(n)
bool isPrime_B2(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i < num / 2; i++) // i< num/2
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
// Optimised approach, O(root n)
bool isPrime_O(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) // i<=sqrt(num)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << isPrime_B1(n) << endl;
    cout << isPrime_B2(n) << endl;
    cout << isPrime_O(n);

    return 0;
}