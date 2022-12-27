#include <iostream>
#include <algorithm>
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

int main()
{
    vector<int> arr{2, 1, 4, 7, 4, 8, 3, 6, 4, 7};
    int n = 5;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    reverse(arr.begin(), arr.end());

    cout << " * " << n << " = ";
    multiply(n, arr);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}