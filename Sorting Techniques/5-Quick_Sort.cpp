#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << " " << arr[i];
    cout << endl;
}

int partition(int *arr, int start, int end)
{
    int pivot = arr[start];
    int i = start, j = end;

    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[start], arr[j]);

    return j;
}

void quickSort(int *arr, int start, int end)
{
    if (start >= end)
        return;
    // partition() puts the pivot element at the right place and return its position
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[6] = {3, 9, 1, -4, 12, -8};
    quickSort(arr, 0, 5);
    printArray(arr, 6);
    return 0;
}