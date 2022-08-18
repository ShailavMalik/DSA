#include <iostream>
using namespace std;

void printSum(int n, int sum)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    sum = sum + n;
    printSum(n - 1, sum);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printSum(n, 0);

    return 0;
}