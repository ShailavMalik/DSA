#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;

    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    int *left = new int[leftLength];
    int *right = new int[rightLength];

    // copy left part
    int originalIndex = s;
    for (int i = 0; i < leftLength; i++)
    {
        left[i] = arr[originalIndex++];
    }

    // copy right part
    originalIndex = mid + 1;
    for (int i = 0; i < rightLength; i++)
    {
        right[i] = arr[originalIndex++];
    }

    // now merge these two sorted arrays
    int index1 = 0;
    int index2 = 0;
    originalIndex = s;
    while (index1 < leftLength && index2 < rightLength)
    {
        if (left[index1] <= right[index2])
            arr[originalIndex++] = left[index1++];
        else
            arr[originalIndex++] = right[index2++];
    }

    while (index1 < leftLength)
    {
        arr[originalIndex++] = left[index1++];
    }

    while (index2 < rightLength)
    {
        arr[originalIndex++] = right[index2++];
    }
}

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);

    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[] = {2, 0, 19, 1, 5, -1};
    int n = sizeof(arr) / sizeof(int);
    int s = 0, e = n - 1;
    cout << "Before sort: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, s, e);

    cout << "\n\nAfter sort: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}