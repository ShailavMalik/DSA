#include <iostream>
using namespace std;

void heapify(int *arr, int n, int i)
{
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;

    // initialise root as largest
    int largest = i;

    if (leftChild < n && arr[leftChild] > arr[i])
        largest = leftChild;

    if (rightChild < n && arr[rightChild] > arr[i])
        largest = rightChild;

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        // recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

void heapSort(int *arr, int n)
{
    // building the heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // one by one extracting elements from heap
    for (int i = n - 1; i > 0; i--)
    {
        // swap largest element i.e root with the last element of heap
        swap(arr[0], arr[i]);
        // heapify the root of reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {10, 1, -1, 8, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}