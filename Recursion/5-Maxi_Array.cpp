#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    return max(arr[size - 1], findMax(arr, size - 1));
}

int main()
{
    int arr[] = {10, 9, 70, 30, 90};
    int n = sizeof(arr) / sizeof(*arr);
    cout << findMax(arr, n);
    return 0;
}