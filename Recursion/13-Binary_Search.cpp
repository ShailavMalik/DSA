#include <iostream>
using namespace std;

int binarySearch(int *arr, int s, int e, int target)
{
    int mid = (s + e) / 2;
    int ans;
    if (arr[mid] == target)
        return mid;
    if (s > e)
        return -1;
    if (arr[mid] > target)
        return binarySearch(arr, s, mid - 1, target);
    if (arr[mid] < target)
        return binarySearch(arr, mid + 1, e, target);
}

int main()
{
    int arr[] = {1, 3, 6, 8, 9};
    int n = sizeof(arr) / sizeof(*arr);
    cout << binarySearch(arr, 0, n - 1, 8);

    return 0;
}