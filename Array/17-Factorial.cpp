#include <iostream>
using namespace std;

int multiply(int n, int res[], int res_size)
{
    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * n + carry;
        res[i] = prod % 10;
        carry =prod/10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        res_size++;
        carry /= 10;
    }
    return res_size;
}

void factorial(int n)
{
    int res[500]; // so the res can have upto 500 digits
    int res_size = 1;
    res[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        res_size = multiply(i, res, res_size);
    }

    // printing the ans
    for (int i = res_size - 1; i >= 0; i--)
    {
        cout << res[i];
    }
}

int main()
{
    factorial(50);

    return 0;
}