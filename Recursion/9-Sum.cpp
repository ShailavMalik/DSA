#include <iostream>
using namespace std;

int getSum(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    return arr[n - 1] + getSum(arr, n - 1);
}

int main()
{
    int arr[] = {1, 8,14,9};
    int n = sizeof(arr) / sizeof(*arr);
    cout << getSum(arr, n);

    return 0;
}