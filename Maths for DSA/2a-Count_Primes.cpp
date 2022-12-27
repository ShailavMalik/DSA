// Program to count the number of prime no. lying from 0 to n, O(n root n)
#include <iostream>
using namespace std;

bool isPrime_O(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) //...this will run 'root n' times
    {
        if (num % i == 0)
            return false;
    }
    return true;
}


int countPrime(int n)
{
    int count = 0;
    for (int j = 0; j <= n; j++) //...this will run 'n' times
    {
        if (isPrime_O(j))
        {
            count++;
            cout<<j<<" ";
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<endl<<countPrime(n);

    return 0;
}