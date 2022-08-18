#include <iostream>
#include <algorithm>
using namespace std;

int multiply(int n, int res[], int res_size)
{
    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * n + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int arr[500] = {2,1,4,7,4,8,3,6,4,7};
    int arr_size = 10;
    int n = 214;
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i];
    }
    reverse(arr, arr + arr_size);

    cout << " * " << n << " = ";
   multiply(n, arr, arr_size);
    for (int i = arr_size - 1; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}