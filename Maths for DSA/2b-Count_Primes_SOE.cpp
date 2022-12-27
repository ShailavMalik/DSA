// Program to count the number of prime no. lying from 0 to less than n
// Sieve of Eratostheses (SOE)
#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n)
{
    // first mark all numbers as prime
    vector<bool> p(n, true);
    // mark 0 and 1 as not prime
    p[0] = p[1] = false;
    int cnt = 0;
    cout << "Prime numbers are: ";
    // Outer loop is for transversing through the array
    for (int i = 2; i * i < n; i++) //...this will run 'root n-1' times
    {
        int k = 2;
        /* this is only possible if it has not come as a multiple of
         any num smaller than it and thus not marked as non prime */
        if (p[i] == true)
        {
            /* this loop is for marking every multiple of i ,that
             came as prime no., as non prime */

            for (int j = i * k; j < n; k++, j = i * k)
            {
                p[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i] == true)
        {
            cnt++;
            cout << i << " ";
        }
    }

    return cnt;
}

int main()
{
    int upto;
    cout << "Enter the number upto which you want to check for prime: ";
    cin >> upto;
    cout << endl
         << "count = "
         << countPrime(upto);

    return 0;
}
