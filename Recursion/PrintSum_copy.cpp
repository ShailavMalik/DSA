#include <iostream>
using namespace std;

int printSum(int n, int sum)
{
    if (n == 0)
    {
        return sum;
    }
    sum = sum + n;
    printSum(n - 1, sum);
    
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout<<printSum(n, 0);

    return 0;
}