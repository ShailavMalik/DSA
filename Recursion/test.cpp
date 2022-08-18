#include <iostream>
using namespace std;

int test(int arr[], int n, int m)
{
    cout << m << " ";
    if ((n / 2 + 1) == m)
        return arr[m - 1];
    test(arr, n, m-1);
}

int main()
{
    int arr[] = {1, 5, 8, 20, -7};
    int n = sizeof(arr) / sizeof(int);
    cout << endl
         << test(arr, n, n);

    return 0;
}