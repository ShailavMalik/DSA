// program to illustrate fast exponentiation
#include <iostream>
using namespace std;

// function for brute force approach for exponentiation (a^b), O(n)
int power(int a, int b)
{
    long long ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}

// function for fast exponentiation (a^b)
int fastExpo(int x, int n)
{
    long long res = 1;
    while (n > 0)
    {
        // if n is odd
        if (1 & n)
            res = res * x;
        // after continuously dividing n(whether odd or even) by 2,
        // a case come when n is 1 (odd) and value gets stored in res
        x = x * x;
        n = n >> 1; // n=n/2
    }

    return res;
}

int main()
{
    int a, b; // 3^5)
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << a << "^" << b << " = " << fastExpo(a, b);

    return 0;
}