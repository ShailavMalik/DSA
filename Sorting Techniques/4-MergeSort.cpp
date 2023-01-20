#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    // copy left and right part to new arrays
    int mid = (s + e) / 2;

    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    int *left = new int[leftLength];
    int *right = new int[rightLength];

    // copy left part
    int index = s;
    for (int i = 0; i < leftLength; i++)
    {
        left[i] = arr[index++];
    }

    // copy right part
    for (int i = 0; i < rightLength; i++)
    {
        right[i] = arr[index++];
    }

    // merge these two sorted array into original array
    int index1 = 0;
    int index2 = 0;
    index = s;
    while (index1 < leftLength && index2 < rightLength)
    {
        if (left[index1] <= right[index2])
            arr[index++] = left[index1++];
        else
            arr[index++] = right[index2++];
    }

    while (index1 < leftLength)
    {
        arr[index++] = left[index1++];
    }

    while (index2 < rightLength)
    {
        arr[index++] = right[index2++];
    }
}

void mergeSort(int arr[], int s, int e)
{
    if (s == e)
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