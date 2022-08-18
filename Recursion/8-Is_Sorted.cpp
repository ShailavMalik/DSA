#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // base case
    if (size == 1)
        return true;
    // processing
    if (arr[0] > arr[1])
        return false;
    // recursive call
    isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(*arr);
    cout << isSorted(arr, size);

    return 0;
}