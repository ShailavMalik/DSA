#include <iostream>
#include <vector>
using namespace std;

void multiply(int n, vector<int> &arr)
{

    int carry = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int prod = arr[i] * n + carry;
        arr[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        arr.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n)
{
    vector<int> arr(1, 1);
    for (int i = 2; i <= n; i++)
    {
        multiply(i, arr);
    }

    for (int i = arr.size()- 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}

int main()
{
    factorial(50);

    return 0;
}